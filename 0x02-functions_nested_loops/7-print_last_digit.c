#include "main.h"

/**
 * print_last_digit - print the last digit of n
 *
 * @n: any number as para n
 * Return: n%10 if n>=0, -n%10 if n<0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned m = n;
		_putchar(m % 10 + '0');
		return (m % 10);
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
