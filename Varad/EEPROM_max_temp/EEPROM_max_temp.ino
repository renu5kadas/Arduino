#include<EEPROM.h>;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
int a=EEPROM.read(1);
Serial.println("Maximum TEmp. is");
Serial.print(a);
}

void loop() {
  // put your main code here, to run repeatedly:

}
