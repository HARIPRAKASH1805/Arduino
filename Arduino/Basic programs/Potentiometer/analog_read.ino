float data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

//take a resistor connected in parallel with a voltage source or just input voltage 0/3.3/5 and note the reading

void loop() {
  // put your main code here, to run repeatedly:
  data=analogRead(A2);  //674 -> since all the values are scaled from 0 to 1023
  Serial.println(data);
  data=((float)(data/1023))*5;
  Serial.println(data);
  delay(3000);
}
