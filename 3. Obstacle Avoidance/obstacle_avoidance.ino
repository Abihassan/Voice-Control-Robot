/* -------- OBSTACLE AVOIDANCE MODE -------- */

#include <Servo.h>

#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

#define trigPin 10
#define echoPin 11

#define servoPin 9

Servo myServo;

long duration;
int distance;

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}

void setup() {
  Serial.begin(9600);

  myServo.attach(servoPin);
  myServo.write(90);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  stopCar();
}

void loop() {
  myServo.write(90);
  delay(200);
  int front = getDistance();

  if (front < 20) {
    stopCar();
    delay(200);
    backward();
    delay(300);
    stopCar();

    // Left scan
    myServo.write(150);
    delay(400);
    int leftD = getDistance();

    // Right scan
    myServo.write(30);
    delay(400);
    int rightD = getDistance();

    // Reset servo
    myServo.write(90);
    delay(200);

    if (leftD > rightD) {
      left();
      delay(400);
    } else {
      right();
      delay(400);
    }

    stopCar();
  }
  else {
    forward();
  }
}
