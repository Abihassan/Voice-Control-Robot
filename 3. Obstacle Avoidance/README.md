# 🤖 Obstacle Avoidance Robot Car

This mode makes the robot drive automatically without Bluetooth.  
It uses a **servo + ultrasonic sensor** to detect obstacles and choose a direction.

---

## 💡 How it Works

1. Servo rotates ultrasonic sensor **left – center – right**  
2. Car reads distance  
3. If obstacle < 20cm:  
   - Stop  
   - Reverse  
   - Turn left or right based on free space  
4. Otherwise continue forward

---

## 🔧 Required Hardware
- Arduino UNO  
- HC-SR04 Ultrasonic Sensor  
- SG90 Servo Motor  
- L298N Motor Driver  
- 12V Battery  
- Optional: Mode switch

---

## ▶️ Code File  
`obstacle_avoidance.ino`

---

## 🖼 Image  
![Car](../images/car1.jpeg)
