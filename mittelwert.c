#include "meineFunktionen.h"

// Hier ist es wichtig, dass float *eingabe als Pointer übergeben wird
// Es zeigt auf die erste Stelle des Arrays!
float berechneMittelwert(float *eingabe, int n)
{
    float ergebnis;
    float temp = 0;

    for (int i = 0; i < n; i++)
    {
        temp += eingabe[i];
    }

    ergebnis = temp / n;

    return ergebnis;
}