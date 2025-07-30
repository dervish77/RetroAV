// RetroAV arduino shield source code
//
// Target: Arduino UNO
//

#include "RetroUI.h"


// define global variables
RetroUI UI;

// define static variables


// Init the UI Manager
void setup() {
  // put your setup code here, to run once:
  UI.init();
}

// Run the UI Manager
void loop() {
  // put your main code here, to run repeatedly:
  UI.loop();
}
