#include "main.h"
/**
 * more_numbers - print 0 - 14 numbers 10 times
 */
void more_numbers(void)
{
	int i = 0, count = 0, over = 0;

	while (count < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar('1');
				_putchar(over + '0');
				i++;
			over++;
			}
			else
			{
				_putchar(i + '0');
				i++;
			}
		}
		i = 0;
		over = 0;
		count++;
		_putchar('\n');
	}
}
