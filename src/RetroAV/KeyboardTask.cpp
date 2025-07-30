// KeyboardTask.cpp
// 
// Keyboard task
//
// Leverages the PS2KeyAdvanced library
//

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>

#include <PS2KeyAdvanced.h>

#include "KeyboardTask.h"


PS2KeyAdvanced keyboard;


void KeyboardTask::init(int clock, int data) 
{
	kbd_clock = clock;
	kbd_data = data;
	
	keyboard.begin( kbd_data, kbd_clock );
}

uint16_t KeyboardTask::task() 
{
	uint16_t c;

	if( keyboard.available( ) )
    {
		// read the next key
		c = keyboard.read( );
		if( c > 0 )
		{
			return(c);
		}
		else
		{
			return(0);
		}
	}
}

