#include "main.h"

int size(char *str)
{
    int n = 0, i = 1;
    char size_str = str[0];
    
    for (i = 0; size_str[i] != '\0'; i++)
    {
        
    }
    
}

char *_strcat(char *dest, char *src)
{

	int n1 = sizeof(dest)/sizeof(dest[0]);
	int n2 = sizeof(src)/sizeof(src[0]);
	int n = n1 + n2 - 1;
	int i, j = 0;
	char total[n];

	for (i = 0; i < n1 - 1; ++i)
	{
		total[i] = dest[i];
	}

	for (i = n1 - 1; i < n; ++i)
	{
		total[i] = src[j];
		j++;
	}
	return (total);
}