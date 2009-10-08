
CC = gcc
AR = ar
CFLAGS = -Wall -g -std=c99
ARFLAGS = r
STATIC_LFILE = libmlist.a
OBJS = mlist.o

.c.o:
	$(CC) $(CFLAGS) -c $<

$(STATIC_LFILE): $(OBJS)
	$(AR) $(ARFLAGS) $(STATIC_LFILE) $(OBJS)

clean:
	rm $(OBJS) $(STATIC_LFILE)


mlist.o: mlist.c mlist.h

