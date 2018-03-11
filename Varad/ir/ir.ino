void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ir = analogRead(A3);
  int y = map(ir, 0, 100, 0, 9);
  Serial.println(y);

}
