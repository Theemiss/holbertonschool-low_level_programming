#include "holberton.h"
/**
 * print_char - print a single char
 * @ap: va_list pointer containg a char
 * @modif: struct modifier containig modifier fields
 * Return: one char count
 */
char *print_char (modifier_t *modif, va_list ap)
{
	char *ch;
	char c;

	if (!ap || !modif)
		return (0);
	c = va_arg(ap, int);
	ch = malloc(2);
	if (!ch)
	{
		return (NULL);
	}
	if (c)
	{
		ch[0] = c;
	}
	else
	{
		ch[0] = '\0';
	}
	ch[1] = '\0';
	return (ch);
}
