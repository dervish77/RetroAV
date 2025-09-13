# makefile for Arduino project
#

SKETCH=RetroAV.ino

TARGET=RetroAV

#------------------------------------------

BUILD = arduino-cli

FQBN = arduino:avr:uno

PORT = /dev/ttyACM0

#------------------------------------------

.SUFFIXES:
.PHONY: all clean realclean

default: all

all: $(TARGET)

$(SKETCH): *.cpp *.h

$(TARGET): $(SKETCH)
	$(BUILD) compile --fqbn $(FQBN) --output-dir . --verbose $(SKETCH) 

#------------------------------------------

install:
	$(BUILD) upload -p $(PORT) --fqbn $(FQBN) $(SKETCH)

#------------------------------------------

clean:
	rm -f *.o *.s *.d *% *~ .*bkp

realclean: clean
	rm -f core *.map *.eep *.elf *.hex *.bin $(TARGET)

#------------------------------------------
# EOF
