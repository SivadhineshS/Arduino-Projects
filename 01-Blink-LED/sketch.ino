int powerpin=11;
void setup() {
  pinMode(powerpin,OUTPUT);
}

void loop() {
  analogWrite(powerpin,255);
  delay(1000);
  analogWrite(powerpin,0);
  delay(1000);
   
}
