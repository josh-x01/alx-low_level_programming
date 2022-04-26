#include "lists.h"

/**
 * pop_listint - pop the head node
 * @head: the first node
 * Return: 0 or the data of first node
 */

int pop_listint(listint_t **head)
{
	int data = (*head)->n;
	listint_t *delMe = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(delMe);

	return (data);
}
