#include "lists.h"
/**
 * isCycleList - checks if a list is a cycle
 * @head: listint_t list
 * Return: a pointer
 */
const listint_t *isCycleList(const listint_t *head)
{
const listint_t *fast = head;
const listint_t *slow = head;
while (fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
fast = fast->next;
slow = slow->next;
}
return (slow);
}
}
return (NULL);
}
/**
 * print_listint_safe - function
 * @head: listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *breakPoint = isCycleList(head);
int ommit = 0;
int count = 0;
while (head && ommit != 2)
{
printf("[%p] %d\n", (void *) head, head->n);
head = head->next;
if (head == breakPoint)
ommit++;
count++;
}
if (ommit == 2)
printf("-> [%p] %d\n", (void *) breakPoint, breakPoint->n);
return (count);
}

