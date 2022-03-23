#include "main.h"

void print_rev(char *s)
{
    int n = 0;
    char str = s[0];

    while (str != '\n')
    {
        n++;
        str = *(s++);
    }
    --n;
    str = s[n-1];
    while(str != s[0])
    {
        _putchar(str);
        --n;
    }
}