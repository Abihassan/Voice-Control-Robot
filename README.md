# 🚗 Arduino Multi-Mode Robot Car (Bluetooth RC + Voice + Obstacle Avoidance)

This project is a 4-wheel robot car built in my first year using Arduino.  
It supports **three control modes**:

1. **Bluetooth RC Control**  
2. **Bluetooth Voice Control**  
3. **Obstacle Avoidance Mode (switch ON)**  

---

## 📸 Project Image
![Robot Car](car1.jpeg)

---

## 🔧 Hardware Components

| No | Component |
|----|-----------|
| 1 | Arduino Uno |
| 2 | L298N Motor Driver |
| 3 | HC-05 Bluetooth Module |
| 4 | 12V Li-Po Battery ×2 |
| 5 | Male-Female Jumper Wires |
| 6 | Male-Male Jumper Wires |
| 7 | 6V DC Motors ×4 |
| 8 | Smartphone |
| 9 | SG90 Servo Motor |
|10 | HC-SR04 Ultrasonic Sensor |
|11 | Switch |
|12 | Battery Holder |

---

## 📱 Mobile Apps Used

### 1️⃣ **Bluetooth RC Controller**
Used to control the car manually:
- Forward  
- Backward  
- Left  
- Right  

Sends characters:  
`F, B, L, R, S`

---

### 2️⃣ **Arduino Bluetooth Control (Voice Control)**
Voice commands such as:
- *Go* → `G`  
- *Stop* → `T`  
- *Back*  
- *Left*  
- *Right*  

---

### 3️⃣ **Obstacle Avoidance Mode**
When you **turn ON the switch**, Bluetooth is ignored and the robot works in **autonomous mode**.

---

## 🧠 Features
✔️ Manual Bluetooth RC mode  
✔️ Voice-controlled mode  
✔️ Obstacle avoidance using:
- Ultrasonic sensor  
- Servo rotation scanning left/center/right  

✔️ Multi-mode switching using a single switch  
✔️ Clean & simple Arduino code  

---

## 🛠️ Wiring Overview

### **L298N Motor Driver → Arduino**
- IN1 → 7  
- IN2 → 6  
- IN3 → 5  
- IN4 → 4  

### **Ultrasonic Sensor**
- Trig → 10  
- Echo → 11  

### **Servo**
- Signal → 9  

### **Bluetooth HC-05**
- TX → RX (pin 0)  
- RX → TX (pin 1)  
> Use 3.3V divider for safety on HC-05 RX.

### **Mode Switch**
- Switch output → pin 12

---

## ▶️ How to Use

### **1. Bluetooth RC Control**
Open app → connect HC-05 → press directional buttons.

### **2. Voice Control**
Open voice app → say:  
*“Go”, “Back”, “Left”, “Stop”…*

### **3. Obstacle Avoidance**
Turn ON the hardware switch → robot becomes autonomous.

---

## 📁 Folder Structure

