#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{

    int i;
    double t[100];
    int tlen = 0;
    int decimals = 0;
    int j;
    double on;
    double sn;

    for (i = 1; i < argc; ++i)
    {
        if (i == 1)
        {
            decimals = atoi(argv[i]);
        }
        else if (i > 1)
        {

            t[tlen] = atof(argv[i]);
            tlen++;
        }
    }

    for (j = 0; j < tlen; j++)
    {

        on = t[j];
        sn = sqrt(t[j]);
        printf("sqrt(%.*f) = %.*f\n", decimals, on, decimals, sn);
    }

    return 0;
}