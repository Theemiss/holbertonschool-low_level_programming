#include "lists.h"

/**
 * insert_dnodeint_at_index - insert element at given index
 * @h:node
 * @idx:index
 * @n:element value
 * Return: NULL or New element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 0;
	dlistint_t *start, *new;
	unsigned int len = len_node(h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	start = *h;
	while (start)
	{
		if (c == idx - 1)
			break;
		else if (c < idx - 1 && start == NULL)
		return (NULL);
		start = start->next;
		c++;
	}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
	if (len == idx)
		return (add_dnodeint_end(h, n));
	else if (len < idx)
		return (NULL);
	start->next->prev = new;
	new->next = start->next;
	start->next = new;
	new->prev = start;
	new->n = n;
	return (new);
}
/**
 * len_node - list len
 *
 * @node:list
 * Return:unsigned int
 */
unsigned int len_node(dlistint_t **node)
{
	unsigned int len = 0;
	dlistint_t *start;

	start = *node;
	while (start != NULL)
	{
		len += 1;
		start = start->next;
	}
	return (len);
}
