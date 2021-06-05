# RetroAV
Retro AV shield for Arduino Uno 

The RetroAV shield provides the interfaces necessary to implement a simple retro style computer user interface using a PS2 keyboard for input, composite video and analog audio for output.


Repo contents:

* docs/          - reference docs for integrated packages
* examples/      - example code using the RetroAV shield
* hw/            - hardware design docs and files
* src/           - source code for the RetroAV shield libary
* tests/         - test programs for verifying shield hardware


## Requirements

* RetroAV shield **shall** support composite video output in Black&White using single RCA output jack.  
  * RetroAV *should* support color output if possible.

* RetroAV shield **shall** support PS2 keyboard input using standard PS2 connector.

* RetroAV shield **shall** support analog audio output using RCA output jack.
  * RetroAV **shall** support at least one "voice" of audio output.
  * RetroAV *should* support more than one "voice" of audio output if possible.

* RetroAV code library **shall** minimally support a simple text terminal style of interface.
  * RetroAV **shall** support the standard ascii character set.
  * RetroAV **shall** support playing an audio tone for the bell character (i.e. control-G).
  * RetroAV **shall** support interfacing via the Arduino serial monitor (i.e. echo characters to serial monitor).
  * RetroAV *should* support interfacing via Arduino serial data pins (i.e. uart pins).


## High Level Design



