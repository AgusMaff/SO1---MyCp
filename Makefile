CFLAGS = -Wall -pedantic -Werror -Wextra -Wconversion -std=gnu11

all: mycp clear

mycp: main.o mycp.o
	gcc $(CFLAGS) -o mycp main.o mycp.o

main.o: main.c mycp.h
	gcc -c main.c mycp.h

mycp.o: mycp.c mycp.h
	gcc -c mycp.c mycp.h

clear:
	rm -f *.o *.h.gch

clean:
	rm -f mycp *.o *.h.gch
