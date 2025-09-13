# makefile for Arduino project
#

SKETCH=VidTest.ino

TARGET=VidTest

#------------------------------------------

BUILD = arduino-cli

FQBN = arduino:avr:uno

PORT = /dev/ttyACM0

#------------------------------------------

.SUFFIXES:
.PHONY: all clean realclean

default: all

all: $(TARGET)

$(SKETCH): *.h
#$(SKETCH): *.cpp *.h

$(TARGET): $(SKETCH)
	$(BUILD) compile --fqbn $(FQBN) --output-dir . --verbose $(SKETCH) 

#------------------------------------------

install:
	$(BUILD) upload -p $(PORT) --fqbn $(FQBN) $(SKETCH)

#------------------------------------------

ide:
	-@echo "type 'arduino $(SKETCH) &'"

#------------------------------------------

clean:
	rm -f *.o *.s *.d *% *~ .*bkp

realclean: clean
	rm -f core *.map *.eep *.elf *.hex *.bin $(TARGET)

#------------------------------------------
# EOF
