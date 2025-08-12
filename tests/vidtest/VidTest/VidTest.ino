// VidTest - test of RetroAV video interface
//
// Target: Arduino UNO
//

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>

#include <TVout.h>
#include <fontALL.h>

#include "Shield.h"


#define SCREEN_MODE		NTSC
#define SCREEN_WIDTH 	120
#define SCREEN_HEIGHT	96


// define global variables
TVout TV;

// define static variables


// Init the video interface
void setup() {
	TV.begin( SCREEN_MODE, SCREEN_WIDTH, SCREEN_HEIGHT );
	TV.select_font(font6x8);
	
	TV.println("VidTest");
	TV.println(" ");
}

// Run the video interface tests
void loop() {
  int i;

  TV.delay(2000);

  for (i=0; i < 4; i++)
  {
    switch (i)
    {
      case 0:
        testCharacters();
        break;
      case 1:
        testHLines();
        break;
      case 2:
        testVLines();
        break;
      case 3:
        testGraphics();
        break;
    }
  }
}

void testCharacters( void )
{
  TV.clear_screen();
  TV.println("0123456789");
  TV.println("ABCDEFGHIJKLM");
  TV.println("NOPQRSTUVWXYZ");
  TV.println("!@#$%^&*()[]{}");
  TV.println("-_=+;:<>,./?");
}

void testHLines( void )
{
  TV.clear_screen();
  TV.draw_line(20,20,100,20,WHITE);
  TV.draw_line(20,40,100,40,WHITE);
  TV.delay(500);
  TV.draw_line(20,60,100,60,WHITE);
  TV.draw_line(20,80,100,80,WHITE);
}

void testVLines( void )
{
  TV.clear_screen();
  TV.draw_line(20,20,20,80,WHITE);
  TV.draw_line(40,20,40,80,WHITE);
  TV.delay(500);
  TV.draw_line(60,20,60,80,WHITE);
  TV.draw_line(80,20,80,80,WHITE);
}

void testGraphics( void )
{
  TV.clear_screen();
  TV.draw_circle(TV.hres()/2,TV.vres()/2,TV.vres()/3,WHITE);
  TV.delay(500);
  TV.draw_circle(TV.hres()/2,TV.vres()/2,TV.vres()/2,WHITE,INVERT);
  TV.delay(1000);

  TV.clear_screen();
  TV.draw_rect(20,20,80,56,WHITE);
  TV.delay(500);
  TV.draw_rect(10,10,100,76,WHITE,INVERT);
}

