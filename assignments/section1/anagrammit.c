
#include <string.h>
#include "./anagrammit.h"
#include <limits.h>

int anagrammeja(char mj1[], char mj2[])
{
    int lkm[UCHAR_MAX + 1];
    alusta(lkm);
    kasvata(lkm, mj1);
    vahenna(lkm, mj2);

    return tarkista(lkm);
    ;
}

void kasvata(int *lkm, char *mj)
{
    int i = 0;

    for (i = 0; i < strlen(mj); ++i)
    {
        lkm[(unsigned char)mj[i]]++;
    }
}

void vahenna(int *lkm, char *mj)
{
    int i = 0;

    for (i = 0; i < strlen(mj); ++i)
    {
        lkm[(unsigned char)mj[i]]--;
    }
}

int tarkista(int *lkm)
{
    int i = 0;

    for (i = 0; i < UCHAR_MAX + 1; ++i)
    {
        if (lkm[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

void alusta(int *lkm)
{
    int i = 0;
    for (i = 0; i < UCHAR_MAX + 1; ++i)
    {
        lkm[i] = 0;
    }
}