PROGRAM_NAME=test.o
CC=g++
CCFLAGS=-Wall -g
LIBS=-lsocket -lnsl
CLEAN=rm -f

$(PROGRAM_NAME): base.cpp
	$(CC) $(CCFLAGS) -o $@ $^
clean:
	$(CLEAN) $(PROGRAM_NAME) *.o
