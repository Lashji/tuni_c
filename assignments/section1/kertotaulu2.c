#include <stdio.h>
#include <stdlib.h>

int len(int x)
{
    int tmp = x;
    int leveys = 0;

    for (tmp; tmp > 0; tmp /= 10)
    {
        leveys++;
    }
    return leveys;
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    int t[100];
    int tlen = 0;
    int leveys = 0;

    for (i = 1; i < argc; ++i)
    {

        t[tlen++] = atoi(argv[i]);
    }
    leveys = len((t[1] * t[3])) + 1;
    printf("%*s", leveys, "");

    for (i = t[0]; i <= t[1]; ++i)
    {
        printf("%*i", leveys, i);
    }
    printf("\n");

    for (i = t[2]; i <= t[3]; ++i)
    {

        for (j = t[0]; j <= t[1]; ++j)
        {

            if (j == t[0])
            {
                printf("%*i", leveys, i);
                printf("%*i", leveys, i * j);
            }
            else
            {
                printf("%*i", leveys, i * j);
            }
        }
        printf("\n");
    }

    return 0;
}
