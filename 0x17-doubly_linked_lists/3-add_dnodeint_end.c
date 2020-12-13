#include "lists.h"

/**
 * add_dnodeint_end - add element at the end of the list
 * @head:list
 * @n:element in list
 * Return:new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
	}
	if (*head != NULL)
		(*head)->prev = new;
	start->next = new;
	new->prev = NULL;
	return (new);
}
