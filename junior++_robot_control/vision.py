import numpy as np
import sslclient

import utils

c = sslclient.client(ip='224.5.23.2', port=10006)

# Bind connection to port and IP for UDP Multicast
c.connect()

ball = {
    "x": -1,
    "y": -1
}

robot = {
    "x": -1,
    "y": -1,
    "orientation": 0
}

from robot import Robot
import time

robots = [
    Robot("/dev/rfcomm0"),
    # Robot("/dev/rfcomm1"),
    # Robot("/dev/rfcomm2")
]

time.sleep(3)


def goto_compute_order(target):
    if callable(target):
        target = target()

    x, y, orientation = target
    Ti = utils.frame_inv(utils.frame(robot["x"], robot["y"], robot["orientation"]))
    target_in_robot = Ti @ np.array([x, y, 1])

    error_x = target_in_robot[0]
    error_y = target_in_robot[1]
    error_orientation = utils.angle_wrap(orientation - robot["orientation"])

    arrived = np.linalg.norm([error_x, error_y, error_orientation]) < 0.05
    order = 1.5 * error_x, 1.5 * error_y, 1.5 * error_orientation

    return arrived, order


def goto(robot, target, wait=True):
    if wait:
        while not goto(robot, target, wait=False):
            time.sleep(0.05)
        robot.control(0, 0, 0)
        return True

    arrived, order = goto_compute_order(target)
    robot.control(*order)

    return arrived


# r.blink()
# r.control(1, 0, 0)
# time.sleep(5)
# r.control(0, 0, 0)

# for robot in robots:
#     robot.close()

goto


while True:
    # received decoded package
    data = c.receive()

    # if data.HasField('geometry'):
    #     print(data.geometry)

    if data.HasField('detection'):
        ball_count = len(data.detection.balls)
        if ball_count > 0:
            ball["x"] = data.detection.balls[0].x
            ball["y"] = data.detection.balls[0].y

        blue_robots_count = len(data.detection.robots_blue)
        if blue_robots_count > 0:
            print(data.detection.robots_blue)
            robot["x"] = data.detection.robots_blue[0].x
            robot["y"] = data.detection.robots_blue[0].y
            robot["orientation"] = data.detection.robots_blue[0].orientation

    print(robot)