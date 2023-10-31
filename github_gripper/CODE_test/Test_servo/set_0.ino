#include <Servo.h>

Servo servo;
int angle = 0;

void setup() {
  servo.attach(9); 
  servo.write(angle); 
}

void loop() {
  
 
}
