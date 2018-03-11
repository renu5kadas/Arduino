#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("HELLOWORLD");

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.begin(16,2);
  lcd.clear();
  delay(1);
  lcd.setCursor(0,0);
  lcd.print("HELLOWORLD");


}
