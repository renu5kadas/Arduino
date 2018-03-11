// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            2

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      6

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
}
int j;
void loop() {

  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.

  /* for(int i=0;i<NUMPIXELS;i++){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(150,0,0)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).

   }
     for(int i=6;i>=0;i--){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).

   }
     for(int i=0;i<NUMPIXELS;i++){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(0,150,0)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).

   }
       for(int i=6;i>=0;i--){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).

   }
       for(int i=0;i<NUMPIXELS;i++){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(0,0,150)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).

   }
       for(int i=6;i>=0;i--){

     // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
     pixels.setPixelColor(i, pixels.Color(0,0,0)); // Moderately bright green color.

     pixels.show(); // This sends the updated pixel color to the hardware.

     delay(1000); // Delay for a period of time (in milliseconds).
  }*/
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(150, 0, 150)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }
  for (int i = 6; i >= 0; i--) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

    for (int i = 6; i >= 0; i--) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(150, 0, 150)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(100); // Delay for a period of time (in milliseconds).
    }
  }
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(150, 150, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }
  for (int i = 6; i >= 0; i--) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

    for (int i = 6; i >= 0; i--) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(150, 150, 0)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(100); // Delay for a period of time (in milliseconds).
    }
  }
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 150)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }
  for (int i = 6; i >= 0; i--) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

    for (int i = 6; i >= 0; i--) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      pixels.setPixelColor(i, pixels.Color(0, 0, 150)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(100); // Delay for a period of time (in milliseconds).
    }
  }
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 0, 0)); // Moderately bright green color.

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }
  for (int i = 0; i < NUMPIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    for (j = 0; j <= 255; j++) {
      pixels.setPixelColor(i, pixels.Color(j, 0, 0)); // Moderately bright green color.

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(1); // Delay for a period of time (in milliseconds).
    }
    for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(0, j, 0)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }
     for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(0, 0, j)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }
         for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(j, j, 0)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }     for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(0, j, j)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }     for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(j, 0, j)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }     for (int i = 0; i < NUMPIXELS; i++) {

      // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
      for (j = 0; j <= 255; j++) {
        pixels.setPixelColor(i, pixels.Color(j, j, j)); // Moderately bright green color.

        pixels.show(); // This sends the updated pixel color to the hardware.

        delay(1); // Delay for a period of time (in milliseconds).
      }
    }
  }
}
