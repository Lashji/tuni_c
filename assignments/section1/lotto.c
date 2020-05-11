#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tulosta(char mj[], int t[], int tlen)
{
    int i = 0;
    printf("%s: ", mj);
    for (i = 0; i < tlen; i++)
    {

        if (i + 1 == tlen)
        {
            printf("%i", t[i]);
        }
        else
        {

            printf("%i ", t[i]);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[])
{

    int i;
    int j;
    int v[7];
    int l[7];
    int oikeat[7];
    int vlen = 0;
    int llen = 0;
    int oikein = 0;

    for (i = 1; i < argc; i++)
    {

        if (i <= 7)
        {
            v[vlen] = atoi(argv[i]);
            vlen++;
        }
        else if (i > 7)
        {
            l[llen] = atoi(argv[i]);
            llen++;
        }
    }

    for (i = 0; i < vlen; i++)
    {

        for (j = 0; j < llen; j++)
        {
            if (l[i] == v[j])
            {
                oikeat[oikein] = v[j];
                oikein++;
            }
        }
    }

    tulosta("Voittorivi\0", v, vlen);
    tulosta("Lottorivi\0", l, llen);

    if (oikein > 0)
    {
        printf("%i", oikein);
        tulosta(" oikein", oikeat, oikein);
    }
    else
    {
        printf("Ei yhtään oikein!\n");
    }

    return 0;
}