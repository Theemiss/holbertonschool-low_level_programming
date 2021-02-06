#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @ap:handle %r
 * @modif :struct modifier containig modifier fields
 * Return: lenght
 */
char *print_rev(modifier_t *modif, va_list ap)
{
	int i;
	int length;
	char *str, *ret;

	if (!ap || !modif)
		return (0);
	str = va_arg(ap, char *);
	length = _strlen(str);
	ret = malloc(length + 1);
	if (!ret)
		return (NULL);

	for (i = 0; i < length; i++)
		ret[i] = str[length - i - 1];
	ret[i] = '\0';

	return (ret);
}
