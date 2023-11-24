#include <Servo.h>
#define THRESHOLD 300
#define EMG_PIN 0 
#define SERVO_PIN 9
Servo SERVO_1; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  SERVO_1.attach(SERVO_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(EMG_PIN);
  delay (400);
  if (value>THRESHOLD){
    SERVO_1.write(0);
  }
  else {
    SERVO_1.write(180);
  }
  Serial.println(value);
}