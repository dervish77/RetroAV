// VideoTask.cpp
// 
// Video task
//
// Leverages the TVout library
// 
// Note: TVout defaults to using pin 9 for sync and pin 7 for video for an Arduino UNO
//

#include <Arduino.h>
#include <stdint.h>
#include <stdlib.h>

#include <TVout.h>
#include <fontALL.h>

#include "VideoTask.h"


TVout TV;


void VideoTask::init(int sync, int video) 
{
	vid_sync = sync;
	vid_video = video;
	
	vid_mode = SCREEN_MODE;
	vid_width = SCREEN_WIDTH;
	vid_height = SCREEN_HEIGHT;
	
	TV.begin( SCREEN_MODE, SCREEN_WIDTH, SCREEN_HEIGHT );
	TV.select_font(font6x8);
	
	TV.println("RetroAV Terminal");
    TV.println("-- Version 0.1 --");
	TV.println(" ");
}

void VideoTask::task(uint16_t character) 
{
	if (character > 0)
	{
		TV.print((char)character);
	}
}
