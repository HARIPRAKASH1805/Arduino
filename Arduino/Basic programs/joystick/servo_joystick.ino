#include <Servo.h>
float vert,horz;
int sw,servoPin1=9,servoPin2=10,switchPin=11;
int joyHoriPin=A0,joyVertPin=A1;
Servo myServo1,myServo2;
void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
}

void loop() {
  // put your main code here, to run repeatedly:
  horz=analogRead(joyHoriPin);
  horz=(180.0/1023.0)*horz;
  vert=analogRead(joyVertPin);
  vert=(180.0/1023.0)*vert;
  myServo1.write(horz);
  myServo2.write(vert);
  sw=digitalRead(11);
  if(sw)
  {
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}

