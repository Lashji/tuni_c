#include <stdio.h>
#include <unistd.h>

int main()
{

    int i;
    int j;
    int k;

    for (k = 0; k <= 15; ++k)
    {
        if (k == 0)
        {
            printf("%4c", 'x');
        }
        else
        {
            printf("%4i", k);
        }
    }
    printf("\n");

    for (i = 1; i <= 15; ++i)
    {
        for (j = 0; j <= 15; ++j)
        {

            if (j == 0)
            {
                printf("%4i", i);
            }
            else
            {
                printf("%4i", i * j);
            }
        }
        printf("\n");
    }

    return 0;
}