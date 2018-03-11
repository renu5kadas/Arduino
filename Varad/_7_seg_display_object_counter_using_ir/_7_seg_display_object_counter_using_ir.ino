int i = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);


}


void loop() {
  // put your main code here, to run repeatedly:
  int ir = analogRead(A3);
  int y = map(0, 9, 0, 1023, ir);
  Serial.println(ir);
  if (i == 0)
    Zero();
  delay(500);
  if (ir >= 10  && i == 0)
  {
    One();
    delay(500);
    i = 1;
  }
  ir = analogRead(A3);
  if (ir >= 10 && i == 1)
  {
    Two();
    delay(500);
    i = 2;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 2)
  {
    Three();
    delay(500);
    i = 3;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 3)
  {
    Four();
    delay(500);
    i = 4;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 4)
  {
    Five();
    delay(500);
    i = 5;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 5)
  {
    Six();
    delay(500);
    i = 6;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 6)
  {
    Seven();
    delay(500);
    i = 7;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 7)
  {
    Eight();
    delay(500);
    i = 8;
  }
  ir = analogRead(A3);
  if (ir >= 10  && i == 8)
  {
    Nine();
    delay(500);
    i = 0;
  }
}
void Zero()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
}
void One()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}
void Two()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
void Three()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
void Four()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
} void Five()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
} void Six()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
} void Seven()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
} void Eight()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
} void Nine()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}





