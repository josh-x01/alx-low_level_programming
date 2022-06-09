#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end
 * @head: the head of the linked list
 * @n: number for new node
 * Return: the address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t new_node = NULL;

	if (head == NULL)
		return (NULL)
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL)
	
	dlistint_t *temp = *head;
	
	while (temp->next != NULL)
		temp = temp->next;
	if (temp != NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
