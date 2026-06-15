# Lost Key Finder using ATmega328P and HC-05 Bluetooth

A simple embedded system project designed to detect potential key loss using Bluetooth communication between a smartphone and an ATmega328P-based microcontroller system. When the Bluetooth connection is disconnected or out of range, the system activates an LED and buzzer alarm automatically.

## Overview

This project was developed as a prototype for a basic **Lost Key Finder System** using an Arduino Uno (ATmega328P) and an HC-05 Bluetooth module. The system monitors the Bluetooth connection between a smartphone and the device. If the connection is lost, the microcontroller triggers visual and audio alerts.

The project demonstrates:
- Embedded system programming
- Bluetooth serial communication
- Basic electronic circuit design
- Integration of hardware and software

---

## Features

- Bluetooth connection monitoring using HC-05
- Automatic alarm when connection is lost
- LED visual indicator
- Buzzer sound notification
- Real-time response system
- Simple and low-cost implementation

---

## Components Used

| Component | Description |
|---|---|
| Arduino Uno (ATmega328P) | Main microcontroller |
| HC-05 Bluetooth Module | Wireless communication |
| LED | Visual indicator |
| Buzzer | Audio alarm |
| 220Ω Resistor | Current limiter for LED |
| Breadboard | Prototype assembly |
| Jumper Wires | Circuit connections |
| USB/Powerbank | Power supply |

---

## System Workflow

1. Smartphone connects to HC-05 via Bluetooth
2. Arduino continuously checks Bluetooth connection status
3. If Bluetooth remains connected:
   - LED = OFF
   - Buzzer = OFF
4. If Bluetooth disconnects or goes out of range:
   - LED = ON
   - Buzzer = ON

---

## Wiring Connections

### HC-05 to Arduino Uno

| HC-05 Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TX | RX |
| RX | TX |

### LED

| LED Pin | Arduino Pin |
|---|---|
| Anode (+) | Digital Pin |
| Cathode (-) | GND through resistor |

### Buzzer

| Buzzer Pin | Arduino Pin |
|---|---|
| Positive | Digital Pin |
| Negative | GND |

---

## Software Requirements

- Arduino IDE
- CH340 Driver (if required)
- Bluetooth Terminal App (Android)
