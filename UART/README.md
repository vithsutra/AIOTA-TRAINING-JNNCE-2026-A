#  UART (Serial Communication) – Simple Guide

##  What is UART?

**UART (Universal Asynchronous Receiver Transmitter)** is used for **serial communication** between devices.

 It sends data **one bit at a time**

---

##  Why UART is Used?

- Communication between microcontrollers  
- Debugging (Serial Monitor)  
- Connecting modules (GPS, GSM, etc.)  

---

## Basic Pins

- **TX (Transmit)** → Sends data  
- **RX (Receive)** → Receives data  

Connection:
- TX → RX  
- RX → TX  

---

## How it Works

- Data is sent in **bits (0s and 1s)**
- No clock signal (asynchronous)
- Uses **baud rate** (speed)

---

##  Baud Rate

Defines communication speed

 Example:
- 9600  
- 115200  

 Both devices must use same baud rate

---

## Data Frame

Each transmission includes:

- Start bit  
- Data bits  
- Stop bit  

---
