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
 * add_node - adding node
 * @head:last node list
 * @str:string
 * Return:new node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
new->len = _strlen(new->str);
new->next = *head;
*head = new;
return (new);
}
