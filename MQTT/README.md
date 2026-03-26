

## ✅ What is MQTT?

**MQTT (Message Queuing Telemetry Transport)** is a **lightweight messaging protocol** mainly used in **IoT (Internet of Things)** applications.

It allows devices to communicate using a **publish–subscribe model** instead of direct device-to-device communication.

### How MQTT Works

MQTT has three main components:

1. **Broker** – Server that manages communication
2. **Publisher** – Device that sends data
3. **Subscriber** – Device that receives data

Example:

```
ESP32 → publishes data → MQTT Broker → PC subscribes → receives data
```

### Why MQTT is Popular

* Lightweight protocol
* Low bandwidth usage
* Fast communication
* Ideal for embedded & IoT devices

---

## ✅ What is Mosquitto CLI?

**Mosquitto** is an open-source MQTT broker developed by Eclipse Foundation.

It provides command-line tools used to test MQTT communication easily.

### Main CLI Tools

#### 1️⃣ mosquitto_pub

Used to **publish messages** to a broker.

Example:

```bash
mosquitto_pub -h localhost -t test/topic -m "Hello MQTT"
```

---

#### 2️⃣ mosquitto_sub

Used to **subscribe and receive messages**.

Example:

```bash
mosquitto_sub -h localhost -t test/topic
```

---

## ✅ Install Mosquitto CLI (Windows)

Download installer:

👉 [https://mosquitto.org/files/binary/win32/mosquitto-2.1.2-install-windows-x86.exe](https://mosquitto.org/files/binary/win32/mosquitto-2.1.2-install-windows-x86.exe)

---

### Step 1 — Run Installer

1. Download the `.exe` file.
2. Double click installer.
3. Click **Next**
4. Accept License Agreement
5. Keep default install location:

```
C:\Program Files\mosquitto
```

6. Finish installation.

---

### Step 2 — Verify Installation

Open **Command Prompt**:

```bash
mosquitto -h
```

If command not recognized → add environment path.

---

## ✅ Add Mosquitto to Environment PATH (Windows)

### Step 1 — Open Environment Variables

1. Press **Windows Key**
2. Search:

```
Edit the system environment variables
```

3. Open it → Click **Environment Variables**

---

### Step 2 — Edit PATH

1. Under **System variables**, select:

```
Path
```

2. Click **Edit**
3. Click **New**
4. Add:

```
C:\Program Files\mosquitto
```

5. Click **OK → OK → OK**

---

### Step 3 — Restart Terminal

Close and reopen Command Prompt.

---

### Step 4 — Test CLI

```bash
mosquitto_pub --help
```

or

```bash
mosquitto_sub --help
```

If help text appears ✅ installation successful.

---

## ✅ MQTT Test Using Remote Broker (Beginner Example)

Below command publishes a simple message using a beginner-friendly topic and message.

### Publish Message

```bash
mosquitto_pub -h biometric.mqtt.vithsutra.com -p 1883 -u VithsutraBiometric -P VithBioI0123GH -t beginner/test -m "Hello MQTT"
```

Where:

| Option | Meaning        |
| ------ | -------------- |
| `-h`   | Broker address |
| `-p`   | Port number    |
| `-u`   | Username       |
| `-P`   | Password       |
| `-t`   | Topic name     |
| `-m`   | Message        |

---

### Subscribe to Message

Open another terminal:

```bash
mosquitto_sub -h biometric.mqtt.vithsutra.com -p 1883 -u VithsutraBiometric -P VithBioI0123GH -t beginner/test
```

Now when you publish, the subscriber will receive:

```
Hello MQTT
```

---

## ✅ Local MQTT Test (Optional)

### Terminal 1 — Subscriber

```bash
mosquitto_sub -h localhost -t test
```

### Terminal 2 — Publisher

```bash
mosquitto_pub -h localhost -t test -m "Hello World"
```

---
