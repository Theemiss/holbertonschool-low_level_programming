#include "lists.h"

/**
 * add_nodeint - add node list
 * @head:pointer to node
 * @n:int to refill
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;
	return (new);

}
