#include "lists.h"

/**
 * free_list - Frees a list_t
 * @head: A pointer to the list_t
 * Return:void
 */
void free_list(list_t *head)
{
	list_t *check, *c;

c = head;
while (c != NULL)
{
	check = c->next;
	free(c->str);
	free(c);
	c = check;
}

}
