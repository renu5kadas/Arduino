void setup() {
  // put your setup code here, to run once:

  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(4, LOW);

}

void loop() {
  digitalWrite( 4, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  delay(1000);

}
