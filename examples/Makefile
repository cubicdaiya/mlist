
CC = gcc
CFLAGS = -Wall -g -std=c99
IFLAGS = -I../src
STATIC_LFILE = ../src/libmlist.a
ALL_OBJS = example
OBJS = test.o

.c.o:
	cd ../src && $(MAKE)
	$(CC) $(CFLAGS) $(IFLAGS) -c $<

all : $(ALL_OBJS)


example : $(OBJS) $(STATIC_LFILE)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(STATIC_LFILE)

clean :
	rm $(ALL_OBJS) $(OBJS) $(STATIC_LFILE)


mlist.o: mlist.c mlist.h

