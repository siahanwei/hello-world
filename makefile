CC=gcc
CFLAGS=-Wall -c

helloworld: hello_world.o
	$(CC) hello_world.o -o helloworld
	
hello_world.o: hello_world.c
	$(CC) $(CFLAGS) hello_world.c
	
clean:
	rm -rf *o helloworld