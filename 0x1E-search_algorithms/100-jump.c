#include "search_algos.h"

/**
 * min - finds the min for the arg.
 * @a: first number.
 * @b: second number.
 * Return: the smaller number.
*/

int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}


/**
 * jump_search - search value in the given array
 * @array: array contain numbers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: index if found, -1 if sth went wrong
*/

int jump_search(int *array, size_t size, int value)
{
	int s = size;
	int l = 0, j = sqrt(size);
	int h = j;

	while (size--)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (l >= s)
			break;
		if (array[l] <= value && array[h] >= value)
			break;
		if (h >= s)
			break;
		l = h;
		h += j;
	}
	printf("Value found between indexes [%i] and [%i]\n", l, h);
	while (array[l] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (array[l] == value)
			break;
		l++;
	}

	if (array[l] == value)
		return (l);
	return (-1);
}
