void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  int value = analogRead(A0);
  value = map(value,0,1023,0,255);
  analogWrite(11,value);

}
