#include <string.h>
#include <stdio.h>
#include "caesar.h"
#include <limits.h>

void caesarKoodaa(char mj[], char aakkosto[], char korvaavat[])
{
    int i = 0;
    int j = 0;
    int indeksi = -1;
    char korvaus[UCHAR_MAX + 1];

    for (i = 0; i < strlen(mj); ++i)
    {
        indeksi = -1;
        for (j = 0; j < strlen(aakkosto); ++j)
        {
            if (mj[i] == aakkosto[j])
            {
                indeksi = j;
                break;
            }
        }

        if (indeksi >= 0)
        {
            korvaus[(unsigned char)i] = korvaavat[indeksi];
        }
        else
        {
            korvaus[(unsigned char)i] = mj[i];
        }
    }
    for (i = 0; i < strlen(mj); ++i)
    {
        mj[i] = korvaus[i];
    }
}
