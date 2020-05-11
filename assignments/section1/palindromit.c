#include <stdio.h>
#include <string.h>
#include <ctype.h>

int onPalindromi(char *lause)
{
    typedef unsigned int uint;

    int i = 0;
    int j = 0;
    char a;
    char b;

    uint len = strlen(lause);
    j = len - 1;
    if (len > 1)
    {

        for (i = 0; i < len; ++i)
        {

            a = (char)tolower(lause[i]);
            b = (char)tolower(lause[j]);
            if (a != b)
            {
                return 0;
            }
            j--;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{

    int i = 0;
    int palindromi = 0;
    char *lause;

    for (i = 1; i < argc; ++i)
    {

        lause = argv[i];

        palindromi = onPalindromi(lause);

        if (palindromi)
        {
            printf("\"%s\": on palindromi", lause);
        }
        else
        {
            printf("\"%s\": ei ole palindromi", lause);
        }
        printf("\n");
    }

    return 0;
}