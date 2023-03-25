CC=gcc
CFLAGS=-W -Wall -ansi -pedantic -std=c99 -g 
LDFLAGS=
EXEC=reversi
 
all: $(EXEC)
 
reversi: reversi.o
	$(CC) -o reversi reversi.o $(LDFLAGS) 
 
reversi.o : reversi.c reversi.h
	$(CC) -o reversi.o -c reversi.c $(CFLAGS) 
 
clean:
	rm -rf $(SRC)*.o $(EXEC)

.PHONY : clean
