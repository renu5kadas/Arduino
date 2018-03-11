void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(12,INPUT);
  digitalWrite(12,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sw=digitalRead(12);
  if(sw==LOW)
   digitalWrite(2,HIGH);
  else
   digitalWrite(2,LOW);

}
