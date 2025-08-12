// KeyTest - test of RetroAV keyboard interface
//
// Target: Arduino UNO
//

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>

#include <PS2KeyAdvanced.h>

#include "Shield.h"


// define global variables
PS2KeyAdvanced keyboard;


// define static variables


// Init the keyboard interface
void setup() {
	keyboard.begin( KBD_DATA, KBD_CLOCK );

  Serial.begin( 115200 );
  Serial.println("KeyTest:");
  Serial.println("... type a key on the PS2 keyboard ...");
  Serial.println(" ");
}

// Run the keyboard interface tests
void loop() {
  int c;

  if( keyboard.available( ) )
  {
    // read the next key
    c = keyboard.read( );
    if( c > 0 )
    {
      Serial.print( "Value " );
      Serial.print( c, HEX );
      Serial.print( " - Status Bits " );
      Serial.print( c >> 8, HEX );
      Serial.print( "  Code " );
      Serial.println( c & 0xFF, HEX );
    }
  }

}



