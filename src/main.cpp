#include <Arduino.h>
#include <MeAuriga.h>

MeRGBLed rgbled_0(0, 12);

void setup()
{
  rgbled_0.setpin(44);

  // Turn off all LEDs
  rgbled_0.setColor(0, 0, 0, 0);
  rgbled_0.show();
}

void loop()
{
  for (int r = 0; r < 256; r = r + 255)
  {
    for (int g = 0; g < 256; g = g + 255)
    {
      for (int b = 0; b < 256; b = b + 255)
      {
        for (int i = 1; i < 13; i++)
        {
          rgbled_0.setColor(i, r, g, b);
          rgbled_0.show();
          delay(100);
        }
      }
    }
  }
}