#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: a pointer to the given list
 *
 * Return: a pointer to the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *back, *next;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
back = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
*head = back;
return (*head);
}
