#include<EEPROM.h>
unsigned char a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int d = EEPROM.read(1);
  int b = analogRead(A3);
  int c = (b * 4.88) / 10;
  if(c>=d)
   EEPROM.write(1, c); 
  a = EEPROM.read(1);
  Serial.println(a);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:


}
