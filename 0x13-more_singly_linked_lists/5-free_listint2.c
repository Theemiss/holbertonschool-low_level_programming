#include "lists.h"

/**
 * free_listint2 - free list
 * @head:pointer to list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

if (head == NULL)
	return;
while (*head)
{
	c = *head;
	*head = (*head)->next;
	free(c);
}
head = NULL;
}
