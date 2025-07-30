// RetroUI.h
// 
// RetroAV UI manager
//

#ifndef RETROUI_H
#define RETROUI_H

#include <stdint.h>
#include <stdlib.h>

#include "KeyboardTask.h"
#include "VideoTask.h"


// define pins to use for RetroAV shield
#define KBD_CLOCK		3
#define KBD_DATA		4

#define VID_SYNC		9
#define VID_VIDEO		7

#define AUD_PWM			11

#define SER_RXD			2
#define SER_TXD			3	// conflicts with PS2 kbd clock!!


class RetroUI {
public:
	void init();
	
	void loop();
	
	void set_kbd_pins( int clock, int data );
	
	void set_video_pins( int sync, int video );
	
	void set_audio_pins( int pwm );
	
	void set_serial_pins( int rxd, int txd );

private:
	int kbd_clock;
	int kbd_data;
	
	int video_sync;
	int video_video;
	
	int audio_pwm;
	
	int serial_rxd;
	int serial_txd;
	
	KeyboardTask KBD;
	VideoTask VID;
	
};

#endif