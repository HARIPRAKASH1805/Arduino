#include <Servo.h>
int servoPos=0;
Servo myServo;
int servoPin=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the angle: ");
  while(Serial.available()==0)
  {
    //infinte loop - wait for input
  }
  servoPos=Serial.parseInt();
  myServo.write(servoPos);

}

