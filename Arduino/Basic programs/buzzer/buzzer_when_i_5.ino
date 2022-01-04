int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  i++;
  if(i%5==0)
  {
    Serial.println("BUZZ");
    digitalWrite(8,HIGH);
    delay(5000);
  }
  else
  {
    Serial.println(i);
  }
  delay(1000);
  digitalWrite(8,LOW);

}
