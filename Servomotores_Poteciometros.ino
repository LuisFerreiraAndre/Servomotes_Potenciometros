/*
Controle de dois servomotores com potenciômetros independentes
*/

#include "Servo.h"

Servo servo1;
Servo servo2;
 
void setup(){

  servo1.attach(5);
  servo2.attach(3);
  
}
 
void loop(){

  int angulo1 = analogRead(0);
  int angulo2 = analogRead(1);
  
  angulo1 = map(angulo1, 0, 1023, 0, 180);
  servo1.write(angulo1); 
  delay(15);
  
  angulo2 = map(angulo2, 0, 1023, 0, 180);
  servo2.write(angulo2); 
  delay(15);
  
}