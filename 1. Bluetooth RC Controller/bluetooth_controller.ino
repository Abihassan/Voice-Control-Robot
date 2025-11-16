/* -------- Bluetooth RC CONTROL -------- */
/* Controls: 
   F = Forward
   B = Backward
   L = Left
   R = Right
   S = Stop
*/

#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

char bt;

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

void setup() {
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  stopCar();
}

void loop() {
  if (Serial.available()) {
    bt = Serial.read();

    if (bt == 'F') forward();
    else if (bt == 'B') backward();
    else if (bt == 'L') left();
    else if (bt == 'R') right();
    else if (bt == 'S') stopCar();
  }
}
