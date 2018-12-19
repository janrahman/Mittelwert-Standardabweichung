#include <stdio.h>
#include <stdlib.h>
#include "meineFunktionen.h"

int main()
{
    float mittelwert;
    float standardabweichung;

    // Eingabe
    int n;

    printf("Bitte geben Sie die Anzahl der Zahlen ein, die berechnet werden sollen:\n");
    scanf("%i", &n);
    printf("Bitte geben Sie hintereinander die %i Zahlen ein:\n", n);

    float zahlen[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", zahlen + i);
    }

    // Aufruf der Funktionen
    // Da "zahlen" ein Array ist, kann die Variable ohne * als Pointer übergeben werden
    mittelwert = berechneMittelwert(zahlen, n);
    standardabweichung = berechneStdAbweichung(zahlen, n, mittelwert);

    // Ausgabe
    printf("Mittelwert: %f\n", mittelwert);
    printf("Standardabweichung: %f\n", standardabweichung);

    return 0;
}