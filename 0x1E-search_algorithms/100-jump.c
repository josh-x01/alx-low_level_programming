#include "search_algos.h"

/**
 * linear_search - search value in the given array
 * @array: array contain numbers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: index if found, -1 if sth went wrong
*/

int jump_search(int *array, size_t size, int value)
{
	int l = 0, j = sqrt(size);
	int h = j;	
	while ( array[min(h, size) - 1] < value)
	{
		printf("Value checked array[%i] = [%i]", l, array[l]);
		l = h;
		h += j;
		if (l >= size)
			return (-1);
	}
	printf("Value found between indexes [%i] and [%i]", l, h);
	while (l < value)
	{
		printf("Value checked array[%i] = [%i]", l, array[l]);
		l++;
		if (l == array[min(h, size)])
			return (-1);
	}

	if (array[l] == value)
		return (l);
	return (-1);
}
