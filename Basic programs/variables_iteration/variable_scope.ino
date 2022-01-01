int num=11;
void setup() {
  int num=10;
  Serial.begin(9600);
  Serial.println(num);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(num);
  delay(60000);

}
