#include "holberton.h"

/**
 * treat_flags_o - treat flags
 * @flags: string of flags
 * @buffer: to store result
 * @pos: size of buffer
 *
 */
void treat_flags_o(char *flags, char *buffer, int *pos)
{
	int i;

	for (i = 0; flags && flags[i]; i++)
	{
		if (flags[i] == '#')
			buffer[(*pos)++] = '0';
	}
}

/**
 * print_octal - print usigned decimal as octal
 * @modif: struct containig modifier fields
 * @ap: va_list pointer containig unsigned int to print
 *
 * Return: number of printed characters
 */

char *print_octal(modifier_t *modif, va_list ap)
{
	unsigned int n;
	int i = 0, j = 0;
	char buffer[11], *res_str;

	if (!ap || !modif || modif->specifier != 'o')
		return (NULL);
	n = va_arg(ap, unsigned int);
	if (n == 0)
	{
		j = 1;
		res_str = malloc(sizeof(char) * 2);
		res_str[0] = '0';
	}
	else
	{
		while (n)
		{
			buffer[i++] = (n % 8) + '0';
			n = n / 8;
		}
		treat_flags_o(modif->flags, buffer, &i);
		res_str = malloc(sizeof(char) * i);
		i--;
		while (i >= 0)
			res_str[j++] = buffer[i--];
	}
	res_str[j] = '\0';
	return (res_str);
}
