/*
Motor Control

Wire Connection 
1. Battery (7.4V)
  + → VCC (L298N)
  - → GND (L298N) + GND (Arduino)
2. Arduino
  D8  → IN1
  D9  → IN2
  D10 → ENA (PWM)
  GND → GND (L298N)
  
L298N OUT1/OUT2 → DC Motor A

*/


int in1 = 8;
int in2 = 9;
int enA = 10;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
}

void loop() {
  // Move forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);  // Set speed
  delay(4000);            // Forward for 4 seconds

  // Move backward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 200);  // Same speed
  delay(4000);            // Backward for 4 seconds
}
