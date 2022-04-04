#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * countStr - counts the number of char
 * @str: the string to be counted
 * Return: the size of string
 */
int countStr(char *str)
{
	int size = 0;

	while (*str++ != '\0')
	{
		size++;
	}
	return (size);
}
/**
 * _strdup - deplicate the str
 * @str: str to be duplicated
 * Return: the new string
 */
char *_strdup(char *str)
{
	int size = countStr(str);

	if (str == 0)
	{
		return (NULL);
	}
	char *word = malloc(size);

	if (word == NULL)
	{
		return (NULL);
	}
	while (size--)
	{
		word[size] = str[size];
	}
	return (word);
}
