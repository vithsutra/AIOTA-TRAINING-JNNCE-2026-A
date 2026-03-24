
## What is ADC?

**ADC (Analog to Digital Converter)** converts **analog signals (voltage)** into **digital values (numbers)**.

 Microcontrollers understand only digital values (0s and 1s).

---

##  What is a Potentiometer?

A **potentiometer (pot)** is a variable resistor used to change voltage.

 When you rotate it:
- Voltage changes from **0V → Vcc**
- ADC reads different values

---

##  Basic Concept

- Pot gives **analog voltage**
- ADC converts it to a **digital number**

Example:
- 0V → 0  
- Mid voltage → ~half value  
- Max voltage → max ADC value  

---

## ADC Resolution

Resolution defines accuracy:

- 10-bit ADC → values from **0 to 1023**
- 12-bit ADC → values from **0 to 4095**
