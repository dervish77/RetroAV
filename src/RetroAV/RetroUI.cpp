// RetroUI.cpp
// 
// RetroAV UI manager
//

#include "RetroUI.h"

#include "KeyboardTask.h"
#include "VideoTask.h"
#include "AudioTask.h"
#include "SerialTask.h"



// Initialize default shield pins and init each task
//
void RetroUI::init() 
{
	set_kbd_pins( KBD_CLOCK, KBD_DATA );
	set_video_pins( VID_SYNC, VID_VIDEO );
	set_audio_pins( AUD_PWM );
	set_serial_pins( SER_RXD, SER_TXD );
	
	KBD.init( kbd_clock, kbd_data );
	VID.init( video_sync, video_video );
}


// Call each task in sequence
// 
void RetroUI::loop() 
{
	uint16_t keyc;
	uint16_t serialc;
	
	// get key from PS2 keyboard
	keyc = KBD.task();
	
	if (keyc > 0)
	{
		// send key to video 
		VID.task( keyc );
		
		// if key is bell character
		if (keyc == KEY_CTL_B)
		{
			// play audio beep
		}
		
		// send key to serial
	}
	else 
	{
		// if receive character from serial
			// send character to video
	}
}


void RetroUI::set_kbd_pins( int clock, int data ) 
{
	kbd_clock = clock;
	kbd_data = data;
}

void RetroUI::set_video_pins( int sync, int video ) 
{
	video_sync = sync;
	video_video = video;
}

void RetroUI::set_audio_pins( int pwm ) 
{
	audio_pwm = pwm;
}

void RetroUI::set_serial_pins( int rxd, int txd ) 
{
	serial_rxd = rxd;
	serial_txd = txd;
}
