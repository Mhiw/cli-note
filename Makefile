CC=gcc
CFLAGS=-Wall -O3
ARGS=

all:
	$(CC) src/*.c $(CFLAGS) -o bin/clinote
	bin/clinote $(ARGS)
