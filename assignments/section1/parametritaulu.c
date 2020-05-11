#include <stdio.h>
#include <string.h>

int get_leveys(int argc, char *t[]);

void tulostaRistikko(int max_len);

void tulostaVali(int alku, int loppu);

int get_arg_len(int count);

void tulosta(int tlen, char *t[], int max_len);

int main(int argc, char *argv[])
{
    int i = 0;
    char *t[255];
    int tlen = 0;
    int max_len;

    for (i = 1; i < argc; ++i)
    {
        t[tlen++] = argv[i];
    }

    max_len = get_leveys(argc, t);
    tulosta(tlen, t, max_len);

    return 0;
}

void tulosta(int tlen, char *t[], int max_len)
{
    int i = 0;
    char *lause;
    int indeksi = 1;
    int arg_len = get_arg_len(tlen);
    tulostaRistikko((5 + arg_len) + max_len);

    for (i = 0; i < tlen; ++i)
    {
        lause = t[i];
        printf("# %*i | %-*s #\n", arg_len, indeksi, max_len, lause);

        if (i + 1 == tlen)
        {

            tulostaRistikko((5 + arg_len) + max_len);
        }
        else
        {

            tulostaVali(2 + arg_len, 2 + max_len);
        }

        indeksi++;
    }
}

int get_leveys(int argc, char *t[])
{

    int max_len = 0;
    int i = 0;

    for (i = 0; i < argc - 1; ++i)
    {

        if (strlen(t[i]) > max_len)
        {
            max_len = (int)strlen(t[i]);
        }
    }

    return max_len;
}

void tulostaRistikko(int max_len)
{
    int i = 0;
    printf("#");

    for (i = 0; i < max_len; ++i)
    {

        printf("#");
    }
    printf("#");

    printf("\n");
}

void tulostaVali(int alku, int loppu)
{
    int i = 0;
    printf("#");
    for (i = 0; i < alku + loppu; ++i)
    {

        if (i == alku)
        {

            printf("+");
        }
        printf("-");
    }
    printf("#\n");
}

int get_arg_len(int count)
{
    int i = 0;
    int len = 0;

    for (i = count; i > 0; i /= 10)
    {
        len++;
    }

    return len;
}