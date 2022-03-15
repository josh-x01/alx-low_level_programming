#include "main.h"
/**
 * print_alphabet_x10 - prints all lowercase letter 10 times
 *
 * Return: null.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int stop = 122, count = 97;

		while (count <= stop)
		{
			_putchar(count);
			count++;
		}
		_putchar('\n');
		i++;
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
