from robot import Robot
import time
from music import *

robots = [
    Robot("/dev/rfcomm0"),
    # Robot("/dev/rfcomm1"),
    # Robot("/dev/rfcomm2")
]

music = []
with open("mario.txt", "r") as f:
    lines = f.read().splitlines()

    for line in lines:
        # print(line)
        if len(line) > 0 and line[0].lower() != line[0]:
            l = line.split(" ")
            f = l[0]
            t = l[1]
            try:
                exec(f"music.append(({f}, {t}))")
            except:
                exec(f"music.append((0, {t}))")

    print(music)

BPM = 2

time.sleep(3)
for i in range(len(music)):
    f, t = music[i]
    robot = robots[0]
    robot.beep(int(f), int(t * 1000 / BPM))
    robot.leds(255, 255, 255)
    time.sleep(t / BPM)
    robot.leds(0, 0, 0)
# r.blink()
# r.control(1, 0, 0)
# time.sleep(5)
# r.control(0, 0, 0)

for robot in robots:
    robot.close()
