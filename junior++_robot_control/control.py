import time

import client

client = client.Client()

time.sleep(2)
print(client.ball)
print(client.ball - [100, 100])

# client.robots["blue"][1].control(0, 0, 0.25)
# time.sleep(1)
# while True:
#     print(client.robots["blue"][1].orientation)
#     # client.robots["blue"][1].control(10, 0, 0)
#     # client.robots["blue"][1].goto(*client.ball, 0, wait=False)
#     # print(.position)
# client.robots["blue"][1].control(0, 0, 0)


client.blue1.goto(lambda: (*client.ball, 3.14), wait=True)

client.stop()
