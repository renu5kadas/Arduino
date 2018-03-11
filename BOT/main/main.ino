#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // (Rx,Tx) //
int l1 = 9;
int l2 = 10;
int r1 = 11;
int r2 = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
}
void loop() {
  char data;
  // put your main code here, to run repeatedly:
  if (mySerial.available()) {
     data=mySerial.read();
  }
  Serial.begin(9600);
 Serial.println(data);

  switch (data)
  {
    case 'F':
      forward();
      break;
    case 'B':
      reverse();
      break;
    case 'R':
      right();
      break;
    case 'L':
      left();
      break;
    default:
      sto();
  }
}
void forward()
{
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
}
void left()
{
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
}
void right()
{
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
}
void reverse()
{
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
}
void sto()
{
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
}
