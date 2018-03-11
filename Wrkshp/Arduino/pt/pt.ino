void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(100);
  
  // put your main code here, to run repeatedly:

}
