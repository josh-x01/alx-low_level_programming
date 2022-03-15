#include <stdio.h>
/**
 * main - fabonachi
 * @void: null
 * Return: Always 0.
 */
int main(void)
{
	long int num1 = 1, num2 = 2, count = 0, sum, total = 1;

	while (count < 8)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0)
		{
			total = total + sum;
		}
		count++;
	}
	printf("%li", total);

	putchar('\n');
	return (0);
}
