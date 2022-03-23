#include "main.h"
/**
 * size - find the size of the array
 * @str: the array
 * Return: the size of array
 */
int size(char *str)
{
	char str_size = str[0];
	int n = 1;

	while (str_size != '\0')
	{
		str_size = str[n];
		n++;
	}
	return (n - 1);
}
/**
 * _strcat - concatinate src on dest
 * @dest: the first array
 * @src: the second array
 * Return: dest + src
 */
char *_strcat(char *dest, char *src)
{
	int n = size(dest), i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	return (dest);
}
