#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 *@head:pointer to last node
 *@n:integer elment in node
 * Return:new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *start;

	start = *head;
	new = malloc(sizeof(listint_t));
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

	start->next = new;
	return (new);
}
