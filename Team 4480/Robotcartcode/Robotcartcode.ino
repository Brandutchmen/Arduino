
#include <Servo.h>
Servo L;
const int up = 9;
const int down = 7;
int ustate = 0;
int dstate = 0;


void setup() {
  L.attach(8);
  pinMode(up, INPUT);
  pinMode(down, INPUT);
  delay(100);
}


void loop() {
 delay(100);
  ustate = digitalRead(up);
  dstate = digitalRead(down);
  if (ustate == HIGH){
   L.write(180);  
  }
  if (dstate == HIGH){
    L.write(0);
  }  
  else{
   L.write(90);
  }
}
