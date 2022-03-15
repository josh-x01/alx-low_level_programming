#include "main.h"

/**
 * print_alphabet - print all lowercase letters
 *
 * Return: null.
 */

void print_alphabet()
{
	int stop = 122, count = 97;

	while (count <= stop)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
	print_alphabet();
	return (0);
}
