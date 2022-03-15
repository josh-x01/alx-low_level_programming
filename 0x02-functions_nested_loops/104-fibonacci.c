#include <stdio.h>
/**
 * main - fabonachi
 * @void: null
 * Return: Always 0.
 */
int main(void)
{
	long int num1 = 1, num2 = 2, count = 0, sum;

	printf("%li, %li", num1, num2);
	while (count < 96)
	{
		sum = num1 + num2;
		if (sum < 0)
		{
			sum = -sum;
		}
		printf(", %li", sum);
		num1 = num2;
		num2 = sum;
		count++;
	}
	putchar('\n');
	return (0);
}
