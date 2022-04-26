#include "lists.h"

/**
 * free_listint2 - free head of the linked list
 * @head: the first node
 */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
