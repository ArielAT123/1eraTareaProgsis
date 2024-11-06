
CC = gcc
CFLAGS = -Wall -std=c99
OBJ = main.o menu.o datos.o

all: programa

programa: $(OBJ)
	$(CC) $(CFLAGS) -o programa $(OBJ) -lm

main.o: main.c menu.h datos.h
	$(CC) $(CFLAGS) -c main.c

menu.o: menu.c menu.h datos.h
	$(CC) $(CFLAGS) -c menu.c

datos.o: datos.c datos.h
	$(CC) $(CFLAGS) -c datos.c

clean:
	rm -f *.o programa
