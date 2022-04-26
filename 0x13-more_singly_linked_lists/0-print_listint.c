#include "lists.h"

/**
 * print_listint - print all integer in the linked list
 * @h: the head of linked list
 * Return: the size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int size = 0;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		size++;
	}

	return (size);
}
