#include "main.h"

/**
 * len - length of str
 * @ptr: first char
 * Return: size of str
 */

int len(const char *ptr)
{
	int size = 0;

	while (*ptr != '\0')
	{
		size++;
		ptr++;
	}
	return (size);
}
/**
 * _pow - compute 2 ** i
 * @i: race
 * Return: the calulated product
 */

int _pow(int i)
{
	int product = 1;

	while (i > 0)
	{
		product *= 2;
		i--;
	}
	return (product);
}

/**
 * binary_to_uint - change bianry to base10
 * @b: first char
 * Return: the base10 value
 */

unsigned int binary_to_uint(const char *b)
{
	int size = len(b), i, num = 0;
	const char *bit = b;

	for (i = size - 1; i >= 0; i--)
	{
		if (!(*bit == '1' || *bit == '0'))
			return (0);
		if (*bit == '1')
			num += _pow(i);
		bit++;
	}
	return (num);
}

