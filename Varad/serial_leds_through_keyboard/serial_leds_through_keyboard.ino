void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    char ch = Serial.read();
    if (ch == 'a');
    {
x: digitalWrite(2, !(digitalRead(2)));
      ch = Serial.read();
      if (ch == 'A')
      {
y: digitalWrite(2, LOW);
        ch = Serial.read();
        if (ch == 'a')
          goto x;
        else
          goto y;
      }
      else
      goto x;
    }

  }
}
