#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    int first = atoi(argv[1]);
    int last = atoi(argv[2]);

    for (i = first; i <= last; ++i)
    {

        char c = (char)i;
        printf("%d", i);
        printf(": ");
        printf("%c", c);
        printf("\n");
    }

    return 0;
}