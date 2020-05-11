#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int i;
    int t[100];
    int j;
    int k;
    int tlen = 0;
    int luku = 0;
    int n[100];
    int nlen = 0;
    int l = 0;

    for (j = 3; j < argc; j++)
    {

        t[tlen] = atoi(argv[j]);
        tlen++;
    }

    for (i = atoi(argv[1]); i <= atoi(argv[2]); i++)
    {

        int flag = 1;

        luku = i;
        for (k = 0; k < tlen; k++)
        {

            if (i % t[k] == 0)
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            n[nlen] = luku;
            nlen++;
        }
    }

    if (nlen > 0)
    {
        for (l = 0; l < nlen; ++l)
        {
            if (l + 1 == nlen)
            {

                printf("%i", n[l]);
            }
            else
            {
                printf("%i ", n[l]);
            }
        }
        printf("\n");
    }

    return 0;
}
