#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	int numberOfNode = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%i] (nil)\n", 5);
			numberOfNode++;
			h = h->next;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			numberOfNode++;
			h = h->next;
		}
	}
	return (numberOfNode);
}

