#include <Servo.h>
int chintu = 4;
int mintu = 2;
Servo motor;

void setup() {
pinMode(chintu,INPUT);
pinMode(mintu,INPUT);
motor.attach(3);
}

void loop() {
if (digitalRead(chintu)==LOW)
{
  motor.write(10);
  }
else if(digitalRead(mintu)==LOW)
{
  motor.write(115);
  }
}