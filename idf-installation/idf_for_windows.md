#  ESP-IDF Installation Guide (Windows)

This guide helps you install **ESP-IDF** on Windows in a simple and beginner-friendly way.

---

## Step 1: Download ESP-IDF Installer

Download the official installer:

 https://dl.espressif.com/dl/esp-idf/?idf=4.4

---

##  Step 2: Run Installer

- Double-click the `.exe` file  
- Click **Next** through the setup  

### Select Components:
-  ESP-IDF (latest version)
-  Tools (Python, Git, CMake, Ninja)

### Install Location:
- C:\Espressif

---

##  Step 3: Wait for Installation

The installer will automatically install:
- Python  
- Git  
- CMake  
- Ninja  
- ESP-IDF  

 Time: 15–30 minutes (depends on internet speed)

---

##  Step 4: Open ESP-IDF Terminal

After installation, open:

 Do NOT use normal CMD or PowerShell.

---

##  Step 5: Verify Installation

Run:
idf.py --version
if version appears installation successfull 

## Step 6: Create project
idf.py create-project YOUR_PROJECT_NAME
cd YOUR_PROJECT_NAME

idf.py set-target esp32s3

idf.py build flash monitor

