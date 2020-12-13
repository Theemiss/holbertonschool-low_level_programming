#include "lists.h"

/**
 *  delete_dnodeint_at_index - delete node at give index
 *	@head:list
 * @index:given index
 * Return: -1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *start;
	unsigned int i;

	start = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		start = start->next;
		free(*head);
		*head = start;
		if (start != NULL)
			start->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		start = start->next;
		if (!start)
			return (-1);
	}
	start->prev->next = start->next;
	start->next->prev = start->prev;
	free(start);
	return (1);
}
