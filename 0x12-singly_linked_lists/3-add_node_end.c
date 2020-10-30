#include "lists.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
unsigned int _strlen(char *s)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			continue;
		}
return (i);
}
/**
 * add_node_end - add new node at the end of the list
 * @head:pointer to ponter to lined list
 * @str : ponter to string inside the list
 * Return:pointer to a node at the end of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	last = *head;
		while (last->next)
		{
		last = last->next;
		}
	last->next = new;
	}
	return (new);
}
