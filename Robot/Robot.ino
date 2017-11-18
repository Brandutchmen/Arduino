
#include <Servo.h>
Servo R;
Servo L;
#define trigPin 7
#define echoPin 8

void setup() {
  L.attach(2);
  R.attach(3);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
delay(100);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  delay(100);
  if (distance > 10){
   R.write(180);
   L.write(0);  
  }
  if (distance < 10){
    R.write(0);
    L.write(0);
  }  
 
}
