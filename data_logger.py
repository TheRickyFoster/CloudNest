# CloudNest Data Logger (Python)

import time
import random

def read_sensor():
    return {
        "PM2.5": round(random.uniform(5, 25), 2),
        "Humidity": round(random.uniform(30, 70), 2),
        "VOC": round(random.uniform(0.1, 0.5), 2)
    }

while True:
    data = read_sensor()
    print(f"Air Quality | PM2.5: {data['PM2.5']} µg/m³ | Humidity: {data['Humidity']}% | VOC: {data['VOC']} ppm")
    time.sleep(10)