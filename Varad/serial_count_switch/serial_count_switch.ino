int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  digitalWrite(12, HIGH);
  Serial.begin(9600);
  Serial.print("Switch is not pressed");

}

void loop() {
  // put your main code here, to run repeatedly:
  int sw = digitalRead(12);
  if (sw == LOW)
  {
    digitalWrite(2, HIGH);
    delay(1000);
    count++;
    Serial.print("\nno. of times the switch is pressed is = ");
    Serial.print(count);
  }
  else
    digitalWrite(2, LOW);
}
