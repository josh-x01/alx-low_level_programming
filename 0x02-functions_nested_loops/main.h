#include <stdio.h>

void print_alphabet(void)
{
	int stop = 122, count = 97;

	while (count <= stop)
	{
		putchar(count);
		count++;
	}
	printf("\n");
}

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
