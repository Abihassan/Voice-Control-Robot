# 🚗 Arduino Multi-Mode Smart Robot Car  
### **Bluetooth RC | Voice Control | Obstacle Avoidance**

A fully-documented Arduino robot car project built using low-cost components.  
It supports **three complete modes**, each with its own Arduino code:

1️⃣ **Bluetooth RC Mode** (manual control with mobile app)  
2️⃣ **Bluetooth Voice Control** (voice commands via HC-05)  
3️⃣ **Obstacle Avoidance Mode** (autonomous navigation with ultrasonic sensor + servo)

This repository rebuilds the entire project from scratch – optimized, clean, and GitHub-ready.

---

## 📸 Project Images

| Robot Car | Circuit Diagram |
|-----------|-----------------|
| ![Robot Car](images/car1.jpeg) | ![Circuit Diagram](images/circuit_fritzing.png) |

---

# 🔥 Features

### Bluetooth-based RC driving  
Use mobile app buttons to move the robot: forward, backward, left, right, stop.

### Voice-Controlled Navigation  
Commands like **“Go”, “Stop”, “Left”, “Back”** are interpreted into signals via HC-05.

### Full Obstacle Avoidance Mode  
The robot automatically scans using a **servo-mounted ultrasonic sensor** and avoids collisions by choosing the best path.

### Modular Project Structure  
Each mode is isolated in its own folder with its own code + README.

### Clean Documentation  
Circuit diagram, wiring tables, images, and video support.

---


### Robot-Car-Project/
### │
### ├── 1_Bluetooth_RC/
### │ ├── bluetooth_rc.ino
### │ └── README.md
### │
### ├── 2_Bluetooth_Voice/
### │ ├── bluetooth_voice.ino
### │ └── README.md
### │
### ├── 3_Obstacle_Avoidance/
### │ ├── obstacle_avoidance.ino
### │ └── README.md
### │
### ├── images/
### │ ├── car1.jpeg
### │ ├── circuit_diagram_ascii.txt
### │ └── circuit_fritzing.png 
### │
### ├── videos/
### │ └── demo.mp4
### │
### └── README.md <-- Main



---

# 🔧 Hardware Components

| Component | Qty | Description |
|----------|-----|-------------|
| Arduino Uno | 1 | Main controller |
| L298N Motor Driver | 1 | Controls 4 DC motors |
| HC-05 Bluetooth Module | 1 | Wireless communication |
| 6V DC Motors | 4 | Wheel motors |
| HC-SR04 Ultrasonic Sensor | 1 | Distance measurement |
| SG90 Servo Motor | 1 | Rotates the ultrasonic sensor |
| 12V Li-Po Battery | 2 | Power source |
| Switch | 1 | Toggle auto mode |
| Jumper Wires | Many | Connections |
| Battery Holder | 1 | Secure mount |

---

# 📡 Control Modes Overview

### **1️⃣ Bluetooth RC Mode**
App sends characters:  
`F, B, L, R, S`

👉 Located in: `/1_Bluetooth_RC/`

---

### **2️⃣ Bluetooth Voice Mode**
Voice app sends characters:  
`G, T, L, R, B`

👉 Located in: `/2_Bluetooth_Voice/`

---

### **3️⃣ Obstacle Avoidance**
Automatically drives → scans left & right → chooses safest direction.

👉 Located in: `/3_Obstacle_Avoidance/`

---

# ⚙ Wiring Overview (Quick Reference)

| Module | Arduino Pin |
|--------|-------------|
| Ultrasonic TRIG | D10 |
| Ultrasonic ECHO | D11 |
| Servo Signal | D9 |
| L298N IN1 | D7 |
| L298N IN2 | D6 |
| L298N IN3 | D5 |
| L298N IN4 | D4 |
| HC-05 TX | D0 (RX) |
| HC-05 RX | D1 (TX, via resistor divider) |
| Mode Switch | D12 |

---

# ▶️ Demo Video

Place your video inside `/videos/demo.mp4` and link it:

Watch Demo Video



---

# 💡 How to Upload Code to Arduino

1. Connect Arduino to USB  
2. Open `.ino` file  
3. Select:
   - Board: **Arduino Uno**
   - Port: your COM port  
4. Click **Upload**

---

# ⭐ Contributing  
Improvements, pull requests, and forks are welcome!

---

# 📜 License  
Choose any license you prefer (MIT recommended).  
I can generate one if you'd like.

---

# 🎉 Credits  
Reconstructed, documented, and organized from scratch based on original project built in first year.


# 🗂 Repository Structure

