import sys
from datetime import datetime
from time import sleep

import requests
import json

HOST = sys.argv[1]

jsonOptions = """{
    "alacarte": {
        "type":"SpeedLimit",
        "speedLimit":10,
        "startingPointSpeedLimit": {
            "deltaLatitude": 100,
            "deltaLongitude": 200,
            "deltaAltitude": 10
        },
        "endingPointSpeedLimit": {
        "deltaLatitude": 400,
        "deltaLongitude": 300,
        "deltaAltitude": -10
        },
        "trafficDirection": 0
    }
}"""


def trigger_speed_limit_denm():
    try:
        req = requests.post("http://" + HOST + ":1188/trigger_denm", json.dumps({"content": jsonOptions}))
        print(req.status_code)
    except ConnectionRefusedError:
        print("Cannot connect to " + HOST)


if __name__ == "__main__":
    while True:
        print("{} - Triggering speed limit DENM".format(datetime.now().strftime("%H:%M:%S")))
        trigger_speed_limit_denm()
        sleep(1)
