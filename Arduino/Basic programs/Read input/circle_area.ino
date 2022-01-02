float radius,area;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the radius: ");
  while(Serial.available()==0)
  {
  }
  radius=Serial.parseFloat();
  area=3.14*radius*radius;
  Serial.print("The area of the circle is ");
  Serial.println(area);

}
