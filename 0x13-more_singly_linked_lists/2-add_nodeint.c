#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the node
 * @head: the first node
 * @n: the data
 * Return: return the newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
