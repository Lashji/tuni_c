#include <stdio.h>
#include <memory.h>

int main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; ++i)
    {

        printf("%i: %s (pituus: %u)\n", i, argv[i], (unsigned int)strlen(argv[i]));
    }

    return 0;
}