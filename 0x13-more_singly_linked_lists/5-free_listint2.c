#include "lists.h"

/**
 * free_listint2 - free head of the linked list
 * @head: the first node
 */


void free_listint2(listint_t **head)
{
	listint_t *t1 = *head, *t2;

	while (t1 != NULL)
	{
		t2 = t1;
		t1 = t1->next;
		free(t2);
	}
}
