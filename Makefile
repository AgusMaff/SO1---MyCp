CFLAGS = -Wall -pedantic -Werror -Wextra -Wconversion -std=gnu11

all: mycp clear

mycp: main.o
	gcc $(CFLAGS) -o mycp main.o

main.o: main.c
	gcc -c main.c main.h

clear:
	rm -f *.o *.h.gch

clean:
	rm -f mycp *.o *.h.gch
