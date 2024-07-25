# Gaire Ananta Prasad (M24W0272)
CC = gcc
CFLAGS = -Wall -Wextra

all: bst_avl

bst_avl: main.o bst.o avl.o
	$(CC) $(CFLAGS) -o bst_avl main.o bst.o avl.o

main.o: main.c bst.h avl.h
	$(CC) $(CFLAGS) -c main.c

bst.o: bst.c bst.h
	$(CC) $(CFLAGS) -c bst.c

avl.o: avl.c avl.h
	$(CC) $(CFLAGS) -c avl.c

clean:
	rm -f *.o bst_avl 
