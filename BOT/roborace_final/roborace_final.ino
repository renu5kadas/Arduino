#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

int l1 = 9;
int l2 = 10;
int r1 = 11;
int r2 = 12;

void setup() {
 Serial.begin(9600);
 mySerial.begin(9600);
 pinMode(l1, OUTPUT);
 pinMode(l2, OUTPUT);
 pinMode(r1, OUTPUT);
 pinMode(r2, OUTPUT);
 pinMode(13 ,OUTPUT);

}
char data;

void loop() {
  Serial.begin(9600);
  if (mySerial.available())
  {
     data = mySerial.read();
  }
  Serial.println(data);
  if(data=='F')  
  {
     forward();
  }
  if(data=='B')  
  {
     reverse();
  }
  if(data=='R')  
  {
     right();
  }
  if(data=='L')  
  {
     left();
  }
  stopall();  
}
void forward()
{
   digitalWrite(l1, HIGH);
   digitalWrite(l2, LOW); 
   digitalWrite(r1, HIGH);
   digitalWrite(r2, LOW);
   digitalWrite(13, HIGH);
}
void reverse()
{
   digitalWrite(l1, LOW);
   digitalWrite(l2, HIGH); 
   digitalWrite(r1, LOW);
   digitalWrite(r2, HIGH);
}
void left()
{
   digitalWrite(l1, LOW);
   digitalWrite(l2, LOW); 
   digitalWrite(r1, HIGH);
   digitalWrite(r2, LOW);
}
void right()
{
   digitalWrite(l1, HIGH);
   digitalWrite(l2, LOW); 
   digitalWrite(r1, LOW);
   digitalWrite(r2, LOW);
}
void stopall()
{
   digitalWrite(l1, LOW);
   digitalWrite(l2, LOW); 
   digitalWrite(r1, LOW);
   digitalWrite(r2, LOW);
}


