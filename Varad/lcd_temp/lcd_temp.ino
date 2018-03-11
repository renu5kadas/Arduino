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
#define btnUP     1
#define btnDOWN   2
#define btnNONE   5

// read the buttons
int read_LCD_buttons()
{
  adc_key_in = analogRead(0);      // read the value from the sensor
  // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
  // we add approx 50 to those values and check to see if we are close
  if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed reasons since it will be the most likely result
  // For V1.1 us this threshold
  if (adc_key_in < 250)  return btnUP;
  if (adc_key_in < 450)  return btnDOWN;
  ;

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
int c = 0;

void setup()
{
  lcd.begin(16, 2);              // start the library
  lcd.setCursor(0, 0);
  lcd.print("TEMPERATURE IS"); // print a simple message
  lcd.setCursor(1, 0);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
}

void loop()
{
  int temp = analogRead(A1);
  int temp1 = (temp * 4.88) / 10;
  delay(250);
  lcd.setCursor(0, 1);
  lcd.print(temp1);
  if (temp1 <= 30)
  {
    digitalWrite(A2, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A3, HIGH);
  }
  if (temp1 >= 31)
  {
    digitalWrite(A2, LOW);
    digitalWrite(A3, LOW);
    digitalWrite(A4, HIGH);
  }
}

