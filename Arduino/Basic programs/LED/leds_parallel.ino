void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); //Leds connected in paralled with pins 10,11,12

}

void ledOn(int pin)
{
  digitalWrite(pin,HIGH);
  delay(2000);
  digitalWrite(pin,LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledOn(10);
  ledOn(11);
  ledOn(12);
  

}
