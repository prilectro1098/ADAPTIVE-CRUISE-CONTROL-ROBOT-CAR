# ADAPTIVE-CRUISE-CONTROL-ROBOT-CAR
I had the opportunity to work on an Adaptive Cruise Control Car using an L298N H-bridge, HC-SR04 ultrasonic sensor, DC motors, and an I2C LCD display. This project allows the car to adjust its speed automatically, based on distance detection, ensuring a safe and efficient driving experience. 🛠️

Adaptive Cruise Control Car
This project demonstrates the development of an adaptive cruise control system for a car using an Arduino microcontroller. The system utilizes an L298N H-bridge motor driver, HC-SR04 ultrasonic sensor, DC motors, and an I2C LCD display to create a real-time distance-based control mechanism for the car’s speed.

Features
Ultrasonic Distance Measurement: The HC-SR04 ultrasonic sensor continuously measures the distance of obstacles in front of the car.
Automatic Speed Control: The car automatically adjusts its speed based on the distance. If an object is detected within 20 cm, the car stops. If the path is clear, the car runs at full speed.
Motor Speed Display: Real-time distance and motor speed values are displayed on a 16x2 I2C LCD display for easy monitoring.
PWM-based Speed Control: The motors are controlled using pulse width modulation (PWM), enabling precise speed adjustment.
Components Used
Arduino
L298N H-bridge motor driver
HC-SR04 ultrasonic sensor
16x2 I2C LCD display
DC motors
Miscellaneous: wires, resistors, etc.
Setup and Usage
Connect the components as per the circuit diagram (to be provided).
Upload the provided Arduino code to your Arduino board.
Power the setup, and the car will adjust its speed based on the distance detected by the ultrasonic sensor.
The I2C LCD will display the distance and the motor speeds.
Team Contributions
This project was completed with the collaboration of:

Divyansh
Sumit
Aditya
Shashanka
Under the guidance of Dr. Rajiv Dey.
