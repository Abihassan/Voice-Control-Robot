# 🎤 Arduino BlueControl (Voice Control)

This section explains how to control the robot car using **Arduino BlueControl** Android application in **Voice Mode**.

---

## 📦 Files
- **Arduino BlueControl.apk** – Android application used for voice-based Bluetooth control

---

## 🔧 Requirements
- Android smartphone  
- Arduino UNO  
- HC-05 Bluetooth module  
- Motor driver (L298N / L293D)  
- Robot car hardware  

---

## ⚙️ Arduino Code Commands

The robot responds to the following Bluetooth characters generated from voice commands:

| Voice Command | Data Sent | Action |
|--------------|-----------|--------|
| Go | G | Move Forward |
| Stop | T | Stop |
| Back | B | Move Backward |
| Left | L | Turn Left |
| Right | R | Turn Right |

> ⚠️ These characters are defined in the Arduino code and must be sent **exactly as uppercase letters**.

---

## 🚗 How to Use Arduino BlueControl App

### 1️⃣ Install the App
- Copy `Arduino BlueControl.apk` to your Android phone  
- Install the application  
- Allow **Install from unknown sources** if prompted  

---

### 2️⃣ Pair Bluetooth Module
1. Power ON the robot  
2. Open **Phone Settings → Bluetooth**  
3. Pair with **HC-05**  
4. Enter PIN: `1234` or `0000`  

---

### 3️⃣ Connect the App
1. Open **Arduino BlueControl**  
2. Select **Bluetooth**  
3. Choose **HC-05**  
4. Connection status will show **Connected**  

---

### 4️⃣ Enable Voice Mode
1. Open **Control Mode / Menu**  
2. Select **Voice Mode**  
3. Tap the **Microphone icon**  
4. Speak voice commands clearly  

---

### 5️⃣ Control the Robot
- Speak one command at a time  
- Example commands:
  - **Go**
  - **Stop**
  - **Back**
  - **Left**
  - **Right**
- Commands are sent at **9600 baud rate**  

---

## 🛠 Troubleshooting

### Robot not moving
- Check motor power supply  
- Ensure correct motor driver wiring  
- Confirm baud rate is `9600`  

### Bluetooth connected but no response
- Ensure **Voice Mode** is enabled  
- Speak commands clearly  
- Ensure microphone permission is granted  
- Verify TX/RX connections  

---

## 📝 Notes
- This control method provides **voice-based control**
- Uses mobile speech recognition
- Works alongside **manual Bluetooth control** in this project
