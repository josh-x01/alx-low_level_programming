#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: first node
 * @n: the data for newnode
 * Return: the newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);
}
