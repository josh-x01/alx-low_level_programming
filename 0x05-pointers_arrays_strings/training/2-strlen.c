#include "main.h"

int _strlen(char *s)
{
    int n = 0;
    char str = s[0];

    while (str != '\0')
    {
        n++;
        str = *(++s);
        printf("%i %c,  ", n, str);
    }

    return n;
}