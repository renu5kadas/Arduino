int trig = A2;
int echo = A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long distance, duration;
  digitalWrite(trig, LOW);
  delay(1);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration / 58;
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);

}
