#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: a pointer to list
 * @index: the given index
 * @n: the given number
 *
 * Return: a pointer to the newly add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *t;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	t = *head;
	while (i < (index - 1) && t->next)
	{
		t = t->next;
		i++;
	}
	if (i < index - 1)
		return (NULL);

	new->next = t->next;
	t->next = new;

	return (new);
}
