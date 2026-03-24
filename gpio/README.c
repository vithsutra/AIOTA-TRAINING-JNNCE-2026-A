                                      
##  What is GPIO?  

**GPIO (General Purpose Input Output)** is a pin on a microcontroller that can be used as:

- **Input** → Read signals (button, sensor)
- **Output** → Send signals (LED, relay, motor driver)

Think of GPIO as a **programmable switch**.
   
---

##  Why GPIO is Important?

GPIO is the **basic building block** in embedded systems because:

- It connects the microcontroller to the **real world**
- Used in almost every project (IoT, robotics, automation)
- Helps in **controlling and monitoring devices**

---
   
## GPIO Modes

Each GPIO pin can be configured in different modes:

### 1. Input Mode
- Used to **read data**
- Example: Button press, sensor signal

 Reads:
- HIGH (1) → Voltage present
- LOW (0) → No voltage

---
 
### 2.  Output Mode
- Used to **control devices**
- Example: LED ON/OFF
   
 Writes:
- HIGH → Turn ON device
- LOW → Turn OFF device

---

##  Basic GPIO Working

### Example:
- Button connected to GPIO → Input
- LED connected to GPIO → Output

 Logic:
- If button pressed → LED ON
- If button not pressed → LED OFF

---
   
##  Pull-up and Pull-down Resistors

Sometimes input pins behave randomly (floating). To fix this:

###  Pull-up
- Default state → HIGH
- When pressed → LOW

###  Pull-down
- Default state → LOW
- When pressed → HIGH

 These can be:
- Internal (inside microcontroller)
- External (resistor used in circuit)

---
 
##  GPIO Configuration Steps

Typical steps in any microcontroller:
   
1. Select GPIO pin
2. Set mode (Input / Output)
3. Configure pull-up/pull-down (if needed)
4. Read or write data




