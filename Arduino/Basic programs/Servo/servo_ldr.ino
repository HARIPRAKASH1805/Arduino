#include<Servo.h>
float out;
int servoPos;
Servo myServo;
int servoPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  out=analogRead(A0);
  out=(out/1023)*5;
  Serial.println(out);
  if(out <= 2.0)
  {
    digitalWrite(8,HIGH);
    delay(2000);
    digitalWrite(8,LOW);
    servoPos+=30;
    myServo.write(servoPos);

  }
}

