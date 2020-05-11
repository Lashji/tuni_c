#include <stdio.h>
#include "./muunto.h"
#include <ctype.h>
void reverse(int len, char str[]);
void changeLetters(int len, char str[]);
int get_str_len(char mj[]);
void muunna(char mj[])
{
    int len = get_str_len(mj);
    changeLetters(len, mj);
    reverse(len, mj);
}

void changeLetters(int len, char str[])
{
    int i = 0;

    for (i = 0; i < len; ++i)
    {
        if (tolower(str[i]) == str[i])
        {
            str[i] = toupper(str[i]);
        }
        else
        {
            str[i] = tolower(str[i]);
        }
    }
}

void reverse(int len, char str[])
{

    int i = 0;
    char tmp;
    int l = len - 1;
    for (i = 0; i < len / 2; ++i)
    {
        tmp = str[i];
        str[i] = str[l - i];
        str[l - i] = tmp;
    }
}

int get_str_len(char mj[])
{
    int i = 0;

    while (mj[i] != '\0')
    {
        i++;
    }

    return i;
}