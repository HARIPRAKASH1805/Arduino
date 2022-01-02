#define pi 3.14
const float pii=3.14;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(pii);
  Serial.println(pi);
  //pii++;  - error const can't be updated

}

void loop() {
  // put your main code here, to run repeatedly:

}
