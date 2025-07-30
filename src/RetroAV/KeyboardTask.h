// KeyboardTask.h
// 
// Keyboard task
//
// Leverages PS2Keyboard library
//

#ifndef KEYBOARDTASK_H
#define KEYBOARDTASK_H

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>


#define KEY_CTL_B		0x2042	// 0x2000 is CTL mask, 0x42 is B key


class KeyboardTask {
public:
	// initialize PS2 interface
	void init( int clock, int data );
	
	// read key from keyboard if available
	uint16_t task();
	

private:
	int kbd_clock;
	int kbd_data;
	
};


#endif
