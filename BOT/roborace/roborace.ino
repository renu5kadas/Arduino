#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);
int r2 = 13;

         void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(r2, OUTPUT);
}

char data;

void loop()
{
  Serial.begin(9600);
  if (mySerial.available())
  {
    data = mySerial.read();
    Serial.print(data);
  }
  if (data == 'F')
  {
    digitalWrite(r2, HIGH);
  }
}/*
  void forward()
  {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  Serial.println('BOT is moving Forward');
  }
  void reverse()
  {
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
  Serial.println('BOT is moving Reverse');
  }
  void left()
  {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  Serial.println('BOT is moving left');
  }
  void right()
  {
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  Serial.println('BOT is moving Right');
  }
  void stopall()
  {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  Serial.println('BOT is Stop');
  }
*/
