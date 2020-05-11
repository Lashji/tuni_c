#include <stdio.h>
#include <stdlib.h>

double getMax(double t[], int tlen)
{
    double suurin = 0;
    int i = 0;
    for (i = 0; i < tlen; ++i)
    {
        if (t[i] > suurin)
        {
            suurin = t[i];
        }
    }

    return suurin;
}

void tulostaYksittaiset(double t[], int tlen)
{
    int i = 0;
    if (tlen > 0)
    {

        printf("Ainutlaatuiset: ");
        for (i = 0; i < tlen; ++i)
        {
            if (i + 1 == tlen)
            {
                printf("%f", t[i]);
            }
            else
            {

                printf("%f ", t[i]);
            }
        }
        printf("\n");
    }
}

void tulostaUseimmitenEsiintyneet(double t[], int tlen, int kertaa)
{
    if (tlen > 0)
    {

        int i = 0;
        printf("Useimmiten esiintyneet (%i kertaa): ", kertaa);
        for (i = 0; i < tlen; ++i)
        {
            if (i + 1 == tlen)
            {
                printf("%f", t[i]);
            }
            else
            {

                printf("%f ", t[i]);
            }
        }
        printf("\n");
    }
}

int getMaxEsiintymiskerrat(double t[], int tlen)
{

    int i = 0;
    int j = 0;
    double esiintymat[255];
    int esiintymatLen = 0;
    int count = 0;
    double suurinEsiintyma = 0;

    for (i = 0; i < tlen; ++i)
    {
        count = 0;
        for (j = 0; j < tlen; ++j)
        {

            if (t[i] == t[j])
            {
                count++;
            }
        }

        esiintymat[i] = count;
        esiintymatLen++;
    }
    suurinEsiintyma = getMax(esiintymat, esiintymatLen);

    return (int)suurinEsiintyma;
}

double getMin(double t[], int tlen)
{
    double pienin = t[0];
    int i = 0;

    for (i = 0; i < tlen; ++i)
    {
        if (t[i] < pienin)
        {
            pienin = t[i];
        }
    }

    return pienin;
}

int esiintymiskerrat(double t[], int tlen, double haettava)
{

    int i = 0;
    int esiintyy = 0;

    for (i = 0; i < tlen; ++i)
    {
        if (t[i] == haettava)
        {
            esiintyy++;
        }
    }

    return esiintyy;
}

int eiOleTaulukossa(double t[], int tlen, double num)
{
    int i = 0;

    for (i = 0; i < tlen; ++i)
    {
        if (t[i] == num)
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{

    int i = 0;
    double t[255];
    int tlen = 0;
    double min = 0;
    double max = 0;
    int esiintyy_lkm = 0;
    double esiintyyKerran[255];
    int esiintyykerranLen = 0;
    double esiintyyMonesti[255];
    int esiintyyMonestiLen = 0;
    int suurinEsiintymiskerta = 0;

    t[0] = 0;
    for (i = 1; i < argc; ++i)
    {
        t[tlen++] = atof(argv[i]);
    }

    suurinEsiintymiskerta = getMaxEsiintymiskerrat(t, tlen);

    for (i = 0; i < tlen; ++i)
    {
        esiintyy_lkm = esiintymiskerrat(t, tlen, t[i]);

        if (esiintyy_lkm == 1)
        {
            esiintyyKerran[esiintyykerranLen] = t[i];
            esiintyykerranLen++;
        }
        else if (esiintyy_lkm == suurinEsiintymiskerta)
        {

            if (eiOleTaulukossa(esiintyyMonesti, esiintyyMonestiLen, t[i]))
            {

                esiintyyMonesti[esiintyyMonestiLen] = t[i];
                esiintyyMonestiLen++;
            }
        }
    }

    min = getMin(t, tlen);
    max = getMax(t, tlen);

    printf("Pienin: %f\n", min);
    printf("Suurin: %f\n", max);
    tulostaYksittaiset(esiintyyKerran, esiintyykerranLen);
    tulostaUseimmitenEsiintyneet(esiintyyMonesti, esiintyyMonestiLen, suurinEsiintymiskerta);
    return 0;
}