#include "meineFunktionen.h"
#include <math.h>

float berechneStdAbweichung(float *eingabe, int n, float mittelwert)
{
    float ergebnis;
    float temp;

    float sum = 0;
    int m = n - 1;

    for (int i = 0; i < n; i++)
    {
        temp = pow((eingabe[i] - mittelwert), 2.0);
        sum += temp;
    }

    ergebnis = sqrt(sum / m);

    return ergebnis;
}