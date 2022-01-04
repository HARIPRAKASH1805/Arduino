int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<100;i++)
  {
    digitalWrite(8,HIGH);
    delay(1);
    digitalWrite(8,LOW);
    delay(1);
  }

  for(i=0;i<100;i++)
  {
    digitalWrite(8,HIGH);
    delay(2);
    digitalWrite(8,LOW);
    delay(2);
  }

}
