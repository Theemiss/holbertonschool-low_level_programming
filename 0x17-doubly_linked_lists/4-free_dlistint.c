#include "lists.h"

/**
 * free_dlistint - free a list
 * @head:list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;
	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}
