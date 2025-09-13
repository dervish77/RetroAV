# makefile for RetroAV tests directory tree
#
# simply type 'make' to make everything
#
#
#



DIRS = keytest/KeyTest vidtest/VidTest 
#DIRS = audiotest/AudioTest keytest/KeyTest sertest/SerTest vidtest/VidTest 



#
# make all programs
#

default: all

# build all executable files

all:
	for dir in $(DIRS);  do               \
	   cd $$dir ; make ; cd ../..;     \
	done;


# build and install all executable files

install:
	for dir in $(DIRS);  do               \
	   cd $$dir ; make install ; cd ../..;     \
	done;


# remove all *.o and backup files

clean:
	for dir in $(DIRS);  do               \
	   cd $$dir ; make clean ; cd ../..;     \
	done;


# remove all *.o, executables, and library files

realclean: clean
	for dir in $(DIRS);  do               \
	   cd $$dir ; make realclean ; cd ../..; \
	done;
	rm -f *~

distclean: realclean

