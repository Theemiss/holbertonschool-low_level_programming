#include "holberton.h"

/**
 * print_unsigned_int - print usigned integer for 'u' conversion specifier
 * @modif: struct containing modifier fields
 * @ap: va_list pointer containig unsigned int to print
 *
 * Return: number of printed characters
 */

char *print_unsigned_int(modifier_t *modif, va_list ap)
{
	unsigned int n;
	int i = 0, j = 0;
	char buffer[10], *res_str;

	if (!ap || !modif || modif->specifier != 'u')
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
			buffer[i++] = (n % 10) + '0';
			n = n / 10;
		}
		res_str = malloc(sizeof(char) * i);
		i--;
		while (i >= 0)
			res_str[j++] = buffer[i--];
	}
	res_str[j] = '\0';
	return (res_str);
}
