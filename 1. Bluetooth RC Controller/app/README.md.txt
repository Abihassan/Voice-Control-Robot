# 📱 Bluetooth RC Controller (Manual Control)

This section explains how to manually control the robot car using the **Bluetooth RC Controller** Android application.

---

## 📦 Files
- **Bluetooth RC Controller.apk** – Android application used to control the robot via Bluetooth

---

## 🔧 Requirements
- Android smartphone  
- Arduino UNO  
- HC-05 Bluetooth module  
- Motor driver (L298N / L293D)  
- Robot car hardware  

---

## ⚙️ Arduino Code Commands

The robot responds to the following Bluetooth commands:

| Command | Action |
|--------|--------|
| F | Move Forward |
| B | Move Backward |
| L | Turn Left |
| R | Turn Right |
| S | Stop |

> ⚠️ These commands are defined in the Arduino code and must be sent **exactly as uppercase letters**.

---

## 🚗 How to Use the Bluetooth RC Controller App

### 1️⃣ Install the App
- Copy `Bluetooth RC Controller.apk` to your Android phone  
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
1. Open **Bluetooth RC Controller**  
2. Tap **Connect**  
3. Select **HC-05**  
4. Connection status will show **Connected**  

---

### 4️⃣ Configure Controls
Use **Button Mode** or **Custom Mode** and assign:

| Button | Value |
|------|------|
| Forward | F |
| Backward | B |
| Left | L |
| Right | R |
| Stop | S |

---

### 5️⃣ Control the Robot
- Press the buttons to move the robot  
- Press **Stop** to halt movement  
- Commands are sent at **9600 baud rate**  

---

## 🛠 Troubleshooting

### Robot not moving
- Check motor power supply  
- Ensure correct motor driver wiring  
- Confirm baud rate is `9600`  

### Bluetooth connected but no response
- Ensure commands are **uppercase**  
- Use **Button Mode** instead of joystick  
- Verify TX/RX connections  

---

## 📝 Notes
- This control method provides **manual control**
- Used as a base before implementing **voice control**
- Works alongside the voice control module in this project
