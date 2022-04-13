#include "main.h"
/**
 * print_name - it print name
 * @name: the name to be printed
 * @f: pointer of function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

