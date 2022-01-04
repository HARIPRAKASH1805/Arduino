int xpin=A0,ypin=A1,swpin=9;
int xpos,ypos,swpos;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  xpos=analogRead(xpin);
  ypos=analogRead(ypin);
  swpos=digitalRead(swpin);
  Serial.println(xpos);
  Serial.println(ypos);
  Serial.println(swpos);
  delay(3000);
}

