void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(10,50);
  delay(1000);
  analogWrite(10,100);
  delay(1000);
  analogWrite(10,150);
  delay(1000);
  analogWrite(10,200);
  delay(1000);
  analogWrite(10,255);
  delay(1000);
  

}
