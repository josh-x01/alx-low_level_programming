#include "variadic_function.h"
#include <stdarg.h>
#include "main"

void print_strings(const char *separator, const unsigned int n, ...)
{
	int count = 0;
	va_list(argptr);
	va_start(argptr, n);
	while (count < n)
	{
		while (argptr != '\0')
		{
			_putchar(argptr);
		}
		count++;
	}
	va_end(argptr);

	return (0);
}

