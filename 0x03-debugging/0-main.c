#include "main.h"
/**
 * positive_or_negative - check the i is negative of positive
 *
 * @i: any integer
 * Return: null
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero", i);
	}
	else
	{
		printf("%i is negative", i);
	}
}
