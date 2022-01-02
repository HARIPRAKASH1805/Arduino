float out;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  out=analogRead(A2);
  out=(out/1023)*5;
  Serial.println(out);
  delay(3000);

}
