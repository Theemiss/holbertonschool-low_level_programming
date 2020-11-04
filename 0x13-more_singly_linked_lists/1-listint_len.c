#include "lists.h"

/**
 * listint_len - length of a list
 * @h:pointer to list element
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
