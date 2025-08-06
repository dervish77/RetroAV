# makefile for Arduino project
#

SKETCH=RetroAV.ino

TARGET=RetroAV

#------------------------------------------

BUILD = arduino-cli

FQBN = arduino:avr:uno

PORT = /dev/ttyACM0

#CC = cl65

#CFLAGS  = -t c64 --create-dep $(<:.c=.d) -O
#LDFLAGS = -t c64 -m $(TARGET).map

#EMU = x64sc

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

#%.o: %.c
#	$(CC) -c $(CFLAGS) -o $@ $<

#$(TARGET): $(SOURCES:.c=.o)
#	$(CC) $(LDFLAGS) -o $@ $^

#test: run

#run: all
#	$(EMU) -autostart $(TARGET) &

#------------------------------------------

clean:
	rm -f *.o *.s *.d *% *~ .*bkp

realclean: clean
	rm -f core *.map *.eep *.elf *.hex *.bin $(TARGET)

#------------------------------------------
# EOF
