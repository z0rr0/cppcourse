PROGRAM_NAME=test.o
CC=g++
C=gcc
CCFLAGS=-Wall -g
# LIBS=-lsocket -lnsl
CLEAN=rm -f
COPY=cp -f *.o *.out bin/

$(PROGRAM_NAME): base.o libcppstyle.a
	$(CC) $(CCFLAGS) -pthread -std=c++11 -o $@ $^ -L. -lcppstyle
	$(COPY)
base.o: base.cpp
	$(CC) $(CCFLAGS) -std=c++11 -c -o $@ $^
libcppstyle.o: cppstyle.cpp
	$(CC) $(CCFLAGS) -c -o $@ $^
libcppstyle.a: libcppstyle.o
	ar crv $@ $^
oldschool.out: oldschool.c
	# $(C) $(CCFLAGS) -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include  -o $@ $^
	$(C) $(CCFLAGS) -o $@ $^
	$(COPY)
clean:
	$(CLEAN) $(PROGRAM_NAME) *.o *.a *.out
