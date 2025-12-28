# 🛡️ LPGDetector

**LPGDetector** is an **Arduino-based LPG gas leakage detection project** designed to monitor the presence of LPG (Liquefied Petroleum Gas) and provide alerts when a dangerous concentration is detected. It’s a simple yet effective hardware project ideal for **home safety demonstrations, educational projects, or DIY IoT safety systems**.

---

## 📌 Project Overview

Gas leaks, especially in kitchens or industrial environments, can be **extremely dangerous** — leading to fires, explosions, or health hazards. This project uses an **Arduino microcontroller** and an **LPG gas sensor** to detect gas leaks in real-time and activate a visual or audible alert when thresholds are exceeded.

The hardware continuously monitors the air for LPG gases; when a leak is detected, the system signals the user with alarms or indicators.

---

## 📁 Repository Structure

```
/
├── sketch_mar23a/              # Arduino sketch for LPG detection
├── LPGDetectorSRC.7z           # Compressed source archive
├── README.md                  # Project documentation
├── WorkingVideo.mp4           # Demo video showing the detector in action
```

---

## 🔥 Features

✔ Real-time LPG gas leakage sensing
✔ Uses standard Arduino hardware
✔ Easy-to-build DIY project
✔ Ideal for learning sensor interfacing and embedded systems
✔ Works with low-cost gas sensors like MQ series (e.g., MQ-5)

---

## 🧰 Requirements

### 🛠 Hardware

| Component                              | Purpose                     |
| -------------------------------------- | --------------------------- |
| **Arduino board (Uno/Nano)**           | Microcontroller             |
| **LPG Gas Sensor (e.g., MQ-5 / MQ-2)** | Detects presence of LPG gas |
| **Buzzer (optional)**                  | Audible alert on detection  |
| **LED (optional)**                     | Visual alert indicator      |
| **Resistors, wires & breadboard**      | Circuit building            |

---

## 🔧 How It Works

1. **Gas sensor continuously reads air quality** — it outputs an electrical signal based on LPG concentration. ([GitHub][2])
2. The **Arduino reads sensor data** on its analog input pin.
3. If the gas level crosses a **predefined threshold**, the controller triggers an alert.
4. The alert can be a **buzzer sound**, **LED blinking**, or any output connected to Arduino.

Sensors like the **MQ-5** detect LPG, propane, and related gases; they must be powered and connected to Arduino analog input for reading gas concentration.

---

## 📥 Setup & Build Instructions

### 1. Circuit Connections

Typical wiring for a gas detector with Arduino and MQ sensor:

```
MQ Sensor VCC → Arduino 5V  
MQ Sensor GND → Arduino GND  
MQ Sensor Analog Out → Arduino A0  
Buzzer → Digital Pin (with resistor)  
LED → Digital Pin (with resistor)
```

---

### 2. Upload Arduino Code

1. Open the **Arduino IDE**.
2. Load the sketch from the `sketch_mar23a` folder.
3. Connect your Arduino board via USB.
4. Select the correct board and COM port.
5. Upload the sketch.

---

### 3. Testing

1. Power the system.
2. Let the gas sensor warm up (~1–2 minutes).
3. Introduce a small LPG source (like near a LPG stove, **safely**).
4. If LPG levels rise above the threshold, the alarm/indicator should activate.

⚠️ Always perform gas testing in a safe, well-ventilated area and handle LPG carefully. — use this for education, not as a certified safety device.

---

## 📹 Working Demo

🎥 A working video (`WorkingVideo.mp4`) is included in this repo to show how the detector performs in real hardware.

---

## 🧠 Background

LPG (Liquefied Petroleum Gas) is highly combustible. Detecting leaks early helps prevent fire hazards and ensures safety in environments where LPG is used regularly. Using affordable sensors like MQ-5, hobbyists can build basic gas detectors and learn about sensor behavior.

---

## 🚀 Enhancements & Ideas

Here are some possible improvements you could add:

* **Calibrate sensor threshold** using potentiometer
* **Add LCD or OLED display** to show real-time gas concentration
* **Integrate SMS/IoT alerts** using GSM or Wi-Fi modules
* **Store sensor data** for monitoring trends
* **Add automatic ventilation or shutdown control** for smart safety

---

## 📜 License

*(You can add your chosen license here — e.g., MIT License, GPL-3.0, etc.)*

Example:

```
MIT License
```

---

## 🤝 Contributing

Contributions, improvements, and feature suggestions are welcome!
To contribute:

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Open a Pull Request

---
[1]: https://github.com/jaygupta12300/LPGDetector/tree/master "GitHub - jaygupta12300/LPGDetector: Arduino Project to detect LPG Leakage"
[2]: https://github.com/Circuit-Digest/Gas-Leakage-Detector-Using-Arduino?utm_source=chatgpt.com "Circuit-Digest/Gas-Leakage-Detector-Using-Arduino"
