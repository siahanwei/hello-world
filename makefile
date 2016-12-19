CC=gcc
CFLAGS=-Wall -c

helloworld: hello_world.o
	$(CC) hello_world.o -o helloworld
	
hello_world.o: hello_world.c asd.h
	$(CC) $(CFLAGS) hello_world.c asd.h
	
clean:
	rm -rf *o all