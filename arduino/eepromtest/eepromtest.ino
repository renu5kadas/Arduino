#include <EEPROM.h>
unsigned char a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(1000);
  Serial.println("EEPROM being Written....");
  a = EEPROM.read(1);
  Serial.write(a);
  Serial.print("  ");
  Serial.println(a);
  delay(1500);
  a = EEPROM.read(2);
  Serial.println(a);
  delay(1500);
  a = EEPROM.read(3);
  Serial.println(a);
  delay(1500);
  a = EEPROM.read(4);
  Serial.println(a);
  delay(1500);
  /*EEPROM.write(1,'A'); delay(100);
  EEPROM.write(2,125); delay(100);
  EEPROM.write(3,100); delay(100);
  EEPROM.write(4,200); delay(100);*/
  Serial.println("Done Writing");
}

void loop() {
  // put your main code here, to run repeatedly:

}
