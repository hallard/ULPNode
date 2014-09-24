#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/power.h>

// address of function table exported by the bootloader
#define __BL_FUNCTION_TABLE 0x7ff0

// return the address of function number (1..7)
#define __BL_FUNCTION_ADDRESS(fnum) (pgm_read_word(__BL_FUNCTION_TABLE+((fnum-1)<<1)))

// declare a type of our function located into bootloader
typedef void (*__bl_showLED) (uint8_t *, uint16_t );

// now declare a function pointer to our declared function 
__bl_showLED showLED;

#define NB_LED 1

// Structure of the LED array
// depends on LED RGB or GRB, the one I have is GRB
struct cRGB { uint8_t g; uint8_t r; uint8_t b; };
//struct cRGB { uint8_t r; uint8_t g; uint8_t b; };

// Led Array
struct cRGB led;

void setup() 
{
  // set address of the bootloader code to our declared function (the 1st one)
  showLED = (__bl_showLED) __BL_FUNCTION_ADDRESS(1);
  
  // If we have a 2nd exported function it will be 
  // dummyFunc = (__bl_dummyFunc) __BL_FUNCTION_ADDRESS(2);;

  // We're running at 4MHz
  clock_prescale_set(clock_div_4);
  
  led.r = 0 ;
  led.g = 0 ;
  led.b = 0 ;

  // call our function 
  (*showLED)((uint8_t *)&led, NB_LED*3);

  
  Serial.begin(38400);
  Serial.println(F("Bootloader Call Test with WS2812B"));
  
  Serial.print(F("__bl_showLED=0x"));
  Serial.println((uint16_t) showLED<<1,HEX);
  
  Serial.print(F("__boot_showLED=0x"));
  Serial.println(pgm_read_word(0x7ff0)<<1,HEX);
  
  Serial.print(F("version=0x"));
  Serial.println(pgm_read_word(0x7ffe),HEX);
  
  Serial.print(F("setup=0x"));
  Serial.println((uint16_t)&setup,HEX);
  
  Serial.print(F("loop=0x"));
  Serial.println((uint16_t)&loop,HEX);
  
  delay(2000);
  
}

void loop() 
{
  // The brightness of each LED (0 to 255).
  unsigned int r, g, b;
  
  // Constants to define the ranges.
  const int hueRedLow   = 0;
  const int hueRedHigh  = 255;
  const int hueBlue     = 170;

  // The size of the angle of one sector (1/6 of a colour wheel), and of a complete
  // cycle of the colour wheel.
  const int angleMin    = 0;
  const int angleSector = 60;
  const int angleMax    = 360;
  const int brightMin   = 0;
  const int brightMax   = 255;


  // The hue is the range 0 (red) to 170 (blue) in rainbow
  // mode or 255 (red) in colour wheel mode.
  // The brightness ranges from 0 (dark) to 255 (full brightness)
  int hue, brightness, saturation;

  // The Hue cycling to degrees - 0 to 360 - for convenience.
  for ( int valuehue=0; valuehue <= 360; valuehue++ ) 
  {

    // Colour wheel mode (red to red, wrapped around in a cycle).
    hue = map(valuehue, angleMin, angleMax, hueRedLow, hueRedHigh);

    // The saturation is fixed at 255 (full) to remove blead-through of different colours.
    // It could be another value if a demonstration of hue is desired.
    // The brightness is fixed at 1/2 full
    saturation = 255;
    brightness = 32;

    // Do the conversion.
    HSBToRGB(hue, saturation, brightness, &r, &g, &b);
    
    for (uint16_t k=0; k<NB_LED*3; k+=3)
    {
      led.r = 0 ;
      led.g = 0 ;
      led.b = 0 ;

      if (k==0)
      {
        led.r = (uint8_t) r;
        led.g = (uint8_t) g;
        led.b = (uint8_t) b;
      }
      
      // call our function 
      (*showLED)((uint8_t *)&led, NB_LED*3);
    }

    delay(30);
  }
}

// This function taken from here:
// http://eduardofv.com/read_post/179-Arduino-RGB-LED-HSV-Color-Wheel-
void HSBToRGB(unsigned int inHue, unsigned int inSaturation, unsigned int inBrightness, unsigned int *oR, unsigned int *oG, unsigned int *oB )
{
  if (inSaturation )
  {
    unsigned int scaledHue = (inHue * 6);
    unsigned int sector = scaledHue >> 8; // sector 0 to 5 around the color wheel
    unsigned int offsetInSector = scaledHue - (sector << 8);	// position within the sector         
    unsigned int p = (inBrightness * ( 255 - inSaturation )) >> 8;
    unsigned int q = (inBrightness * ( 255 - ((inSaturation * offsetInSector) >> 8) )) >> 8;
    unsigned int t = (inBrightness * ( 255 - ((inSaturation * ( 255 - offsetInSector )) >> 8) )) >> 8;

    switch( sector ) 
    {
      case 0: *oR = inBrightness; *oG = t; *oB = p; break;
      case 1: *oR = q; *oG = inBrightness; *oB = p; break;
      case 2: *oR = p; *oG = inBrightness; *oB = t; break;
      case 3: *oR = p; *oG = q; *oB = inBrightness; break;
      case 4: *oR = t; *oG = p; *oB = inBrightness; break;
      default: *oR = inBrightness;*oG = p;*oB = q; break;
    }
  }
  else
    // achromatic (grey)
    *oR = *oG = *oB = inBrightness;
}

