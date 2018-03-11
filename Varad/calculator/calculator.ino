//Sample using LiquidCrystal library
#include <LiquidCrystal.h>

/*******************************************************

This program will test the LCD panel and the buttons
Mark Bramwell, July 2010

********************************************************/

// select the pins used on the LCD panel
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// define some values used by the panel and buttons
int lcd_key     = 0;
int adc_key_in  = 0;
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

// read the buttons
int read_LCD_buttons()
{
  adc_key_in = analogRead(0);      // read the value from the sensor
  // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
  // we add approx 50 to those values and check to see if we are close
  if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
  // For V1.1 us this threshold
  if (adc_key_in < 50)   return btnRIGHT;
  if (adc_key_in < 250)  return btnUP;
  if (adc_key_in < 450)  return btnDOWN;
  if (adc_key_in < 650)  return btnLEFT;
  if (adc_key_in < 850)  return btnSELECT;

  // For V1.0 comment the other threshold and use the one below:
  /*
   if (adc_key_in < 50)   return btnRIGHT;
   if (adc_key_in < 195)  return btnUP;
   if (adc_key_in < 380)  return btnDOWN;
   if (adc_key_in < 555)  return btnLEFT;
   if (adc_key_in < 790)  return btnSELECT;
  */


  return btnNONE;  // when all others fail, return this...
}
float a = 0;
float b = 0;

void setup()
{
  lcd.begin(16, 2);              // start the library
  lcd.setCursor(0, 0);
  lcd.print("a="); // print a simple message
  lcd.setCursor(2, 0);
  lcd.print(a);
  lcd.setCursor(0, 1);
  lcd.print("b="); // print a simple message
  lcd.setCursor(2, 1);
  lcd.print(b);
  lcd.setCursor(7, 0);
  lcd.print("U=+a D=-a");
  lcd.setCursor(7, 1);
  lcd.print("L=+b R=-b");
  Serial.begin(9600);
}

void loop()
{
  // move to the begining of the second line
  lcd_key = read_LCD_buttons();  // read the buttons

  switch (lcd_key)               // depending on which button was pushed, we perform an action
  {
    case btnRIGHT:
      {
        lcd.setCursor(12, 1);
        lcd.print("R");
        b--;
        delay(250);
        lcd.setCursor(3, 1);
        lcd.print(" ");
        break;
      }
    case btnLEFT:
      {
        lcd.setCursor(7, 1);
        lcd.print("L");
        b++;
        delay(250);
        lcd.setCursor(3, 1);
        lcd.print(" ");
        break;
      }
    case btnUP:
      {
        lcd.setCursor(7, 0);
        lcd.print("U");
        a++;
        delay(250);
        lcd.setCursor(3, 0);
        lcd.print(" ");
        break;
      }
    case btnDOWN:
      {
        lcd.setCursor(12, 0);
        lcd.print("D");
        a--;
        delay(250);
        lcd.setCursor(3, 0);
        lcd.print(" ");
        break;
      }
    case btnSELECT:
      {
        lcd.print("SELECT");
        break;
      }
    case btnNONE:
      {
        break;
      }
  }
  lcd.setCursor(2, 0);
  lcd.print(a);
  lcd.setCursor(2, 1);
  lcd.print(b);
  int a = analogRead(A1);
  Serial.println(a);
  if (a <= 300)
    maths();

}
void maths()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("a="); // print a simple message
  lcd.setCursor(2, 0);
  lcd.print(a);
  lcd.setCursor(0, 1);
  lcd.print("b="); // print a simple message
  lcd.setCursor(2, 1);
  lcd.print(b);
  lcd.setCursor(7, 0);
  lcd.print("U=+ D=-");
  lcd.setCursor(7, 1);
  lcd.print("L=* R=/");
a: lcd_key = read_LCD_buttons();  // read the buttons

  switch (lcd_key)               // depending on which button was pushed, we perform an action
  {
    case btnRIGHT:
      {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("a="); // print a simple message
        lcd.setCursor(2, 0);
        lcd.print(a);
        lcd.setCursor(0, 1);
        lcd.print("b="); // print a simple message
        lcd.setCursor(2, 1);
        lcd.print(b);
        lcd.setCursor(7, 0);
        lcd.print("DIV IS");
        lcd.setCursor(9, 1);
        lcd.print(a / b);
        delay(2000);
        break;
      }
    case btnLEFT:
      {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("a="); // print a simple message
        lcd.setCursor(2, 0);
        lcd.print(a);
        lcd.setCursor(0, 1);
        lcd.print("b="); // print a simple message
        lcd.setCursor(2, 1);
        lcd.print(b);
        lcd.setCursor(7, 0);
        lcd.print("MUL IS");
        lcd.setCursor(9, 1);
        lcd.print(a * b);
        delay(2000);
        break;
      }
    case btnUP:
      {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("a="); // print a simple message
        lcd.setCursor(2, 0);
        lcd.print(a);
        lcd.setCursor(0, 1);
        lcd.print("b="); // print a simple message
        lcd.setCursor(2, 1);
        lcd.print(b);
        lcd.setCursor(7, 0);
        lcd.print("ADD IS");
        lcd.setCursor(9, 1);
        lcd.print(a + b);
        delay(2000);
        break;
      }
    case btnDOWN:
      {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("a="); // print a simple message
        lcd.setCursor(2, 0);
        lcd.print(a);
        lcd.setCursor(0, 1);
        lcd.print("b="); // print a simple message
        lcd.setCursor(2, 1);
        lcd.print(b);
        lcd.setCursor(7, 0);
        lcd.print("SUB IS");
        lcd.setCursor(9, 1);
        lcd.print(a - b);
        delay(2000);
        break;
      }
    case btnNONE:
      {
        goto a;
        break;
      }
  }

}

