#include "lists.h"

/**
 * listint_len - calculate the size of the linked list
 * @h: the head of linked list
 * Return: the size of the linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int size = 0;

	while (temp)
	{
	temp = temp->next;
	size++;
	}
	return (size);
}
