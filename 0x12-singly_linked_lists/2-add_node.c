#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node to linked list
 * @head: the number node
 * @str: the string to be added
 * Return: return the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int strLen = 0;

	while (*str != '\0')
	{
		str++;
		strLen++;
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strLen;
	newNode = (*head);
	(*head) = newNode;

	return (newNode);
}

