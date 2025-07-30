// VideoTask.h
// 
// Video task
//
// Leverages TVout library
//

#ifndef VIDEOTASK_H
#define VIDEOTASK_H

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>

#include <TVout.h>


#define SCREEN_MODE		NTSC
#define SCREEN_WIDTH 	120
#define SCREEN_HEIGHT	96


class VideoTask {
public:
	// initialize video interface
	void init( int sync, int video );
	
	// read key from keyboard if available
	void task( uint16_t character );
	
	
private:
	int vid_sync;
	int vid_video;
	
	int vid_mode;
	int vid_width;
	int vid_height;
	
};

#endif
