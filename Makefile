CFLAGS = -std=c99 -Wall -g

compile: main.c mittelwert.c standardabweichung.c
	gcc $(CFLAGS) -o meineFunktionen *.c -lm

clean:
	rm -f meineFunktionen
