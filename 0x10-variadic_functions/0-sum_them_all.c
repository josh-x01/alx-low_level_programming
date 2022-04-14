#include <stdarg.h>
/**
 * sum_them_all - it sum up all passed arguments
 * @n: the number of arguments
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int count = 0;

	va_list argptr;

	va_start(argptr, n);

	if (n == 0)
	{
		return (0);
	}
	while (count < n)
	{
		sum += va_arg(argptr, int);
		count++;
	}
	va_end(argptr);

	return (sum);
}

