PROGRAM_NAME=test.o
CC=g++
CCFLAGS=-Wall -g
# LIBS=-lsocket -lnsl
CLEAN=rm -f
COPY=cp *.o bin/

$(PROGRAM_NAME): base.o libthebestzorro.a
	$(CC) $(CCFLAGS) -o $@ $^ -L. -lthebestzorro
	$(COPY)
base.o: base.cpp
	$(CC) $(CCFLAGS) -c -o $@ $^
libthebestzorro.o: thebestzorro.cpp
	$(CC) $(CCFLAGS) -c -o $@ $^
libthebestzorro.a: libthebestzorro.o
	ar crv $@ $^
clean:
	$(CLEAN) $(PROGRAM_NAME) *.o *.a
