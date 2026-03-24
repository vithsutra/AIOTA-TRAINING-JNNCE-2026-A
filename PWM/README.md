# PWM with Stepper Motor – Simple Guide

##  What is PWM?

**PWM (Pulse Width Modulation)** is a technique to control signals by switching ON and OFF rapidly.

 It is used to control:
- Speed  
- Power  
- Movement  

---

##  What is a Stepper Motor?

A **stepper motor** moves in **fixed steps** instead of continuous rotation.

 Each pulse = one step

---

## Basic Concept

- Stepper motor needs **pulse signals**
- Each pulse → motor moves one step
- Speed depends on **pulse frequency**

Faster pulses = faster rotation  
Slower pulses = slower rotation  

---

##  PWM Role in Stepper Motor

PWM (or pulse signal) is used to:

- Generate **STEP pulses**
- Control **motor speed**

 Note:
- PWM here is mainly used as **pulse generation**
- Not like LED brightness control

---

## Important Pins (Driver Based)

Using drivers like A4988 / TMC2209:

- **STEP** → Pulse input  
- **DIR** → Direction control  
- **EN** → Enable/Disable  

---

##  Working

1. Set direction (DIR pin)  
2. Send pulses to STEP pin  
3. Motor rotates step-by-step  

---

