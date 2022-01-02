int num,i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the number of times: ");
  while(Serial.available()==0)
  {
  }

  num=Serial.parseInt();

  for(i=0;i<num;i++)
  {
    digitalWrite(8,HIGH);
    delay(3000);
    digitalWrite(8,LOW);
    delay(2000);
  }

}
