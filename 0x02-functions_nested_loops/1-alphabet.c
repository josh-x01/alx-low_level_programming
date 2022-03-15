#include "main.h"

/**
 * print_alphabet - print all lowercase letters
 *
 * Return: null.
 */

void print_alphabet(void)
{
	int stop = 122, count = 97;

	while (count <= stop)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
