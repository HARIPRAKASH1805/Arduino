int num=123;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);  //connect positive terminal to pin 12 
  Serial.begin(9600);
  Serial.println(num);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);// wait for a second
  num=num+1;
  Serial.println(num);
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
