# ESP32 Home Automation Prototype Using Blynk IOT

## Overview

This project demonstrates a Home Automation Prototype using ESP32 and the Blynk IoT platform. The system allows users to remotely control room lights through a smartphone application over Wi-Fi. Four LEDs are used to simulate lights in different rooms of a house.

The project showcases ESP32 Wi-Fi connectivity, cloud communication, GPIO control, and IoT application development using the Blynk platform.

---

## Features

* Remote control of room lights using Blynk IoT
* Wi-Fi enabled communication with ESP32
* Real-time control through smartphone application
* Cloud-based device management
* Individual control for each room
* Simple and scalable IoT architecture

---

## Hardware Components

* ESP32 Development Board
* Breadboard
* 4 LEDs

  * White LED (Living Room)
  * Red LED (Bathroom)
  * Green LED (Kitchen)
  * Blue LED (Bedroom)
* 4 × 220Ω Resistors
* Jumper Wires
* Smartphone with Blynk IoT App

---

## Software Requirements

* Arduino IDE
* ESP32 Board Package
* Blynk IoT Platform
* Blynk Library for Arduino

---

## Room Mapping

| Room        | LED Color | GPIO Pin | Virtual Pin |
| ----------- | --------- | -------- | ----------- |
| Living Room | White     | GPIO13   | V0          |
| Bathroom    | Red       | GPIO12    | V1         |
| Kitchen     | Green     | GPIO14   | V2          |
| Bedroom     | Blue      | GPIO27  | V3           |

---

## System Architecture

Phone Application
↓
Blynk Cloud
↓
Wi-Fi Network
↓
ESP32
↓
Room LEDs

---

## Working Principle

1. The ESP32 connects to a Wi-Fi network.
2. The ESP32 authenticates with the Blynk Cloud using an Auth Token.
3. The user interacts with buttons on the Blynk mobile application.
4. Commands are transmitted to the Blynk Cloud.
5. The ESP32 receives commands through Virtual Pins.
6. Corresponding GPIO pins are updated.
7. LEDs representing room lights are switched ON or OFF.

---

## Blynk Configuration

### Datastreams

| Datastream  | Virtual Pin |
| ----------- | ----------- |
| Living Room | V0          |
| Bathroom    | V1          |
| Kitchen     | V2          |
| Bedroom     | V3          |

### Widgets

Create four Button widgets and assign:

* Living Room → V0
* Bathroom → V1
* Kitchen → V2
* Bedroom → V3

Set each button to Switch Mode.

---

## Circuit Connections

White LED  → GPIO13

Red LED    → GPIO27

Green LED  → GPIO14

Blue LED   → GPIO12

Connect each LED through a 220Ω resistor to GND.

---

## Project Demonstration

The user can control room lights remotely through the Blynk application from any location with internet access.

Example:

* Living Room ON
* Bathroom OFF
* Kitchen ON
* Bedroom OFF

All changes are reflected in real time on the ESP32.

---

## Learning Outcomes

Through this project, the following concepts were implemented:

* ESP32 Programming
* Wi-Fi Communication
* Blynk IoT Platform
* Virtual Pins
* GPIO Control
* Cloud-Based Communication
* IoT System Design

---

## Future Enhancements

* Relay-based appliance control
* Fan speed control
* Voice assistant integration
* Temperature and humidity monitoring
* Energy consumption monitoring
* Smart scheduling
* Mobile notifications

---

## Author

Shaik Rizwan basha

Embedded Systems and IoT Enthusiast

Technologies: ESP32 | Embedded C | IoT | Blynk | Wi-Fi | Arduino IDE
