#include <Adafruit_NeoPixel.h>

#define PIN  4
#define ON   100

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(5, PIN, NEO_GRB + NEO_KHZ800);

void setup() 
{
  pixels.begin();

  pixels.setPixelColor(0, ON, 0, 0);
  pixels.setPixelColor(1, ON, 0, 0);
  pixels.setPixelColor(2, ON, 0, 0);
  pixels.setPixelColor(3, ON, 0, 0);
  pixels.setPixelColor(4, ON, 0, 0);
  pixels.show();  
}


void loop()
{
}


