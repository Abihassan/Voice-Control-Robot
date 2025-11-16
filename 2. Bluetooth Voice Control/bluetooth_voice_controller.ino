/* -------- Bluetooth Voice Control -------- */
/* Voice Commands:
   "Go"   -> G
   "Stop" -> T
   "Back" -> B
   "Left" -> L
   "Right"-> R
*/

#define IN1 7
#define IN2 6
#define IN3 5
#define IN4 4

char voiceCmd;

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
    voiceCmd = Serial.read();

    if (voiceCmd == 'G') forward();      // Go
    else if (voiceCmd == 'T') stopCar(); // Stop
    else if (voiceCmd == 'B') backward();
    else if (voiceCmd == 'L') left();
    else if (voiceCmd == 'R') right();
  }
}
