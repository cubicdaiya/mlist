
CC = gcc
CFLAGS = -Wall -g -std=c99
IFLAGS = -I../src
STATIC_LFILE = ../src/libmlist.a
OBJS = test.o $(STATIC_LFILE)

.c.o:
	cd ../src && $(MAKE)
	$(CC) $(CFLAGS) $(IFLAGS) -c $<

all : $(OBJS)

sample : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean :
	rm $(OBJS)


mlist.o: mlist.c mlist.h

