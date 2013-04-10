PROGRAM_NAME=test.o
CC=g++
CCFLAGS=-Wall -g
# LIBS=-lsocket -lnsl
CLEAN=rm -f
COPY=cp *.o bin/

$(PROGRAM_NAME): base.o libcppstyle.a
	$(CC) $(CCFLAGS) -o $@ $^ -L. -lcppstyle
	$(COPY)
base.o: base.cpp
	$(CC) $(CCFLAGS) -c -o $@ $^
libcppstyle.o: cppstyle.cpp
	$(CC) $(CCFLAGS) -c -o $@ $^
libcppstyle.a: libcppstyle.o
	ar crv $@ $^
clean:
	$(CLEAN) $(PROGRAM_NAME) *.o *.a
