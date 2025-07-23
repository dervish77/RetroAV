# RetroAV
Retro AV shield for Arduino Uno 

The RetroAV shield provides the interfaces necessary to implement a simple retro style computer user interface using a PS2 keyboard for input, composite video and analog audio for output.  

It is assumed that the RetroAV shield will be used with an Arduino board (UNO boards will be supported by default, other variants may require code modifications).  The combination of the RetroAV shield and an Ardunio will essentially form a simple text terminal similar in spirit to a VT100 terminal of the past.  It is hoped that this pairing can be combined with other microcontroller boards to form larger retro computing systems.


Repo contents:

* docs/          - system design docs, block diagrams, etc
* examples/      - example code using the RetroAV shield
* hw/            - hardware design files
* ref/           - reference documents for integrated packages
* src/           - source code for the RetroAV shield libary
* tests/         - test programs for verifying shield hardware


## Requirements

* RetroAV shield **shall** support PS2 keyboard input using standard PS2 connector.

* RetroAV shield **shall** support composite video output in Black&White using single RCA output jack.  
  * RetroAV **shall** support at least 20 characters by 16 lines of video output. 
  * RetroAV *should* support at least 40 characters by 24 lines of video output.
  * RetroAV *should* support color output if possible.

* RetroAV shield **shall** support analog audio output using RCA output jack.
  * RetroAV **shall** support a 1 volt peak to peak output signal.
  * RetroAV **shall** support at least one "voice" of audio output.
  * RetroAV *should* support more than one "voice" of audio output if possible.

* RetroAV shield **shall** support a serial interface connector as a 4 pin header.
  * RetroAV **shall** support a UART style serial interface.
  * RetroAV *should* support an I2C style serial interface.

* RetroAV code library **shall** minimally support a simple text terminal style of interface.
  * RetroAV **shall** support the standard ascii character set.
  * RetroAV **shall** support playing an audio tone for the bell character (i.e. control-G).
  * RetroAV **shall** support interfacing via the Arduino serial monitor (i.e. echo characters to serial monitor).
  * RetroAV *should* support interfacing via Arduino serial data pins (i.e. uart pins).

* RetroAV code library **shall** minimally support a standard Arduino UNO board.
  * RetroAV *should* be supportable on variant boards via simple code modifications.


## High Level Design

### System Block Diagram

![system](https://github.com/dervish77/RetroAV/blob/master/docs/RetroAV-System-Block-Diagram.png?raw=true)

### HW Block Diagram

![HW](https://github.com/dervish77/RetroAV/blob/master/docs/RetroAV-HW-Block-Diagram.png?raw=true)

### SW Block Diagram

![SW](https://github.com/dervish77/RetroAV/blob/master/docs/RetroAV-SW-Block-Diagram.png?raw=true)


## Detailed Design

### Hardware

#### PS2 Keyboard Input

The PS2 keyboard input is a standard 6-pin PS2 keyboard connector.  This connector provides 5V power and ground to the PS2 keyboard and accepts the clock and data signals from the keyboard.  Clock is connected to PIO pin 3 on an Arduino UNO (note this signal must be connected to an IRQ input or the keyboard interface library won't work).  Data is connected to PIO pin 4 on an Arduino UNO.  

![PS2](https://github.com/dervish77/RetroAV/blob/master/docs/RetroAV-PS2-HW-Diagram.png?raw=true)

#### Composite Video Output

The Composite video output is a standard RCA connector.  This connector outputs the video signal and ground.  The output circuit takes in sync and video signals from the Arduino via series resistors.  This scheme is directly leveraging the TVout library method of creating composite video.  The sync signal uses pin 9 from an Arduino UNO.  The video signal uses pin 7 from an Arduino UNO.

#### Audio Output

The Audio output is a standard RCA connector.  This connector outputs the mono audio signal and ground.  The output circuit takes in PWM audio from the Arduino via an RC circuit.  The PWM signal uses pin 11 from an Arduino UNO.

#### Serial Interface

tbd

### Software

#### Keyboard Task

tbd

#### Video Task

tbd

#### Audio Task

tbd

#### Serial Task

tbd

#### UI Manager

tbd

#### Arduino Interface

tbd

