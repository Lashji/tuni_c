#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getRatkaisu(double a, double b, double c);

void laskeYksi(double a, double b, double c);

void laskeKaksi(double a, double b, double c);

int main(int argc, char *argv[])
{
    double ratkaisu = 0;
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);

    ratkaisu = getRatkaisu(a, b, c);

    if (ratkaisu == 0)
    {
        printf("Ei ratkaisua\n");
    }
    else if (ratkaisu == 1)
    {

        laskeYksi(a, b, c);
    }
    else
    {
        laskeKaksi(a, b, c);
    }

    return 0;
}

double getRatkaisu(double a, double b, double c)
{

    double ab = sqrt(pow(b, 2) - (4 * (a * c)));
    if (ab != ab)
    {
        return 0;
    }
    else if (ab == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

void laskeYksi(double a, double b, double c)
{

    double lasku = b * -1 / (2 * a);
    printf("%.3f\n", lasku);
}

void laskeKaksi(double a, double b, double c)
{
    double ratkaisu1 = ((b * -1) + sqrt(pow(b, 2) - (4 * (a * c)))) / (2 * a);
    double ratkaisu2 = ((b * -1) - sqrt(pow(b, 2) - (4 * (a * c)))) / (2 * a);

    if (ratkaisu1 < ratkaisu2)
    {

        printf("%.3f ", ratkaisu1);
        printf("%.3f", ratkaisu2);
    }
    else
    {
        printf("%.3f ", ratkaisu2);
        printf("%.3f", ratkaisu1);
    }

    printf("\n");
}