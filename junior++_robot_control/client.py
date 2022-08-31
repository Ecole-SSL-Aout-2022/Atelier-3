import signal
import numpy as np
import threading
import time
import utils
import sslclient

from robot import Robot


class ClientError(Exception):
    pass


class ClientTracked:
    def __init__(self):
        self.position = None
        self.pose = None
        self.orientation = None
        self.last_update = None


class ClientRobot(ClientTracked):
    def __init__(self, color, number, client, port):
        super().__init__()
        self.robot = Robot(port)
        self.moved = False
        self.color = color
        self.team = color
        self.number = number
        self.client = client

    def ball(self):
        return self.client.ball

    def has_position(self, skip_old):
        seen = (self.position is not None) and (self.orientation is not None)
        if skip_old:
            seen = seen and self.age() < 1

        return seen

    def age(self):
        if self.last_update is None:
            return None

        return time.time() - self.last_update

    def kick(self, power=1):
        return self.client.command(self.color, self.number, "kick", [power])

    def control(self, dx, dy, dturn):
        self.moved = True
        self.robot.control(dx, dy, dturn)
        # return self.client.command(self.color, self.number, "control", [dx, dy, dturn])

    def leds(self, r, g, b):
        return self.client.command(self.color, self.number, "leds", [r, g, b])

    def goto_compute_order(self, target, skip_old=True):
        if not self.has_position(skip_old):
            return False, (0.0, 0.0, 0.0)

        if callable(target):
            target = target()

        x, y, orientation = target
        Ti = utils.frame_inv(utils.robot_frame(self))
        target_in_robot = Ti @ np.array([x, y, 1])

        error_x = target_in_robot[0] / 1000.0
        error_y = target_in_robot[1] / 1000.0
        print(error_x, error_y)

        error_orientation = utils.angle_wrap(orientation - self.orientation)
        print(np.linalg.norm([error_x, error_y, error_orientation]))


        arrived = np.linalg.norm([error_x, error_y, error_orientation]) < 0.05
        order = 1.5 * error_x, 1.5 * error_y, 1.5 * error_orientation

        return arrived, order

    def goto(self, target, wait=True, skip_old=True):
        if wait:
            while not self.goto(target, wait=False):
                time.sleep(0.05)
            self.control(0, 0, 0)
            return True

        arrived, order = self.goto_compute_order(target, skip_old)
        self.control(*order)

        return arrived


class Client:
    def __init__(self, ip="224.5.23.2", port=10006, wait_ready=True):
        self.running = True
        self.lock = threading.Lock()
        self.robots = {}

        # Creating self.green1, self.green2 etc.
        _port = "/dev/rfcomm"
        c = 0
        for color, number in utils.all_robots():
            robot_id = utils.robot_list2str(color, number)
            robot = ClientRobot(color, number, self, f"{_port}{c}")
            self.__dict__[robot_id] = robot

            if color not in self.robots:
                self.robots[color] = {}
            self.robots[color][number] = robot
            # TODO: UNCOMMENT
            break
            # c += 1

        # Custom objects to track
        self.objs = {n: ClientTracked() for n in range(1, 9)}

        self.ball = None

        # Creating subscriber connection
        self.req = sslclient.client(ip=ip, port=port)
        self.req.connect()

        self.on_update = None
        self.sub_packets = 0
        self.sub_thread = threading.Thread(target=lambda: self.sub_process())
        self.sub_thread.start()

        # Informations from referee
        self.referee = None

        # Creating request connection

        # Waiting for the first packet to be received, guarantees to have robot state after
        # client creation
        dt = 0.05
        t = 0
        warning_showed = False
        while wait_ready and self.sub_packets < 1:
            t += dt
            time.sleep(dt)
            if t > 3 and not warning_showed:
                warning_showed = True
                print("WARNING: Still no message from vision after 3s")
                print("if you want to operate without vision, pass wait_ready=False to the client")

    def __enter__(self):
        return self

    def __exit__(self, type, value, tb):
        self.stop()

    def update_position(self, tracked, infos):
        tracked.position = np.array(infos["position"])
        tracked.orientation = infos["orientation"]
        tracked.pose = np.array(list(tracked.position) + [tracked.orientation])
        tracked.last_update = time.time()

    def sub_process(self):
        last_t = time.time()
        while self.running:
            data = self.req.receive()
            ts = time.time()
            dt = ts - last_t
            last_t = ts

            # if data.HasField('geometry'):
            #     print(data.geometry)

            if data.HasField('detection') and data.detection.balls:
                ball_count = len(data.detection.balls)
                self.ball = None if ball_count < 1 else np.array((data.detection.balls[0].x, data.detection.balls[0].y))

            if data.HasField('detection') and data.detection.robots_blue:
                blue_robots_count = len(data.detection.robots_blue)
                for i in range(blue_robots_count):
                    robot_detection = data.detection.robots_blue[i]
                    # TODO: robot_id
                    info = {
                        "position": (data.detection.robots_blue[0].x, data.detection.robots_blue[0].y),
                        "orientation": data.detection.robots_blue[0].orientation
                    }
                    self.update_position(self.robots["blue"][1], info)

            # if "referee" in data:
            #     self.referee = data["referee"]

            # if self.on_update is not None:
            #     self.on_update(self, dt)

            self.sub_packets += 1

    def stop_motion(self):
        for color in self.robots:
            robots = self.robots[color]
            for index in robots:
                if robots[index].moved:
                    try:
                        robots[index].control(0.0, 0.0, 0.0)
                    except ClientError:
                        pass

    def em(self):
        self.stop_motion()

    def stop(self):
        for team in self.robots.values():
            for robot in team.values():
                robot.robot.close()

        self.stop_motion()
        self.running = False

    def command(self, color, number, name, parameters):
        if threading.current_thread() is threading.main_thread():
            sigint_handler = signal.getsignal(signal.SIGINT)
            signal.signal(signal.SIGINT, signal.SIG_IGN)

        self.lock.acquire()
        self.req.send_json([self.key, color, number, [name, *parameters]])
        success, message = self.req.recv_json()
        self.lock.release()

        if threading.current_thread() is threading.main_thread():
            signal.signal(signal.SIGINT, sigint_handler)

        time.sleep(0.01)

        if not success:
            raise ClientError('Command "' + name + '" failed: ' + message)
