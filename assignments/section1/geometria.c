
#include "./geometria.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const long double PII = 3.1415926535897932385L;

double ympyranAla(double sade)
{

    return pow(sade, 2) * PII;
}

double pallonTilavuus(double sade)
{
    return (4 * (pow(sade, 3) * PII)) / 3;
}