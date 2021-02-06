#include "holberton.h"

/**
 * print_binary - print unsigned int as a binary
 * @modif: struct containing modifier fields
 * @ap: va_list pointer containing unsigned int to convert and print
 *
 * Return: number of printed charachters
 */

char *print_binary(modifier_t *modif, va_list ap)
{
	unsigned int n;
	int i = 0, j = 0;
	char binary[35], *res_str;

	if (!ap || !modif || modif->specifier != 'b')
		return (0);
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
			binary[i++] = '0' + (n % 2);
			n = n / 2;
		}
		res_str = malloc(sizeof(char) * i);
		i--;
		while (i >= 0)
			res_str[j++] = binary[i--];
	}
	res_str[j] = '\0';
	return (res_str);
}
