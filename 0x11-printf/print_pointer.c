#include "holberton.h"

/**
 * print_pointer - print pointer as hexadecimal
 * @modif: struct containing modifier fields
 * @ap: va_list pointer containing pointer to print
 *
 * Return: number of printed characters
 */
char *print_pointer(modifier_t *modif, va_list ap)
{
	long int p, aux;
	char buffer[1024], *res_str;
	int i = 0, j = 0;

	if (!modif || !ap || modif->specifier != 'p')
		return (NULL);
	p = va_arg(ap, long int);
	if (p == 0)
	{
		res_str = malloc(sizeof(char) * 4);
		res_str[j++] = '0';
		res_str[j++] = 'x';
		res_str[j++] = '0';
	}
	else
	{
		while (p)
		{
			aux = p % 16;
			if (aux > 9)
				buffer[i++] = (aux % 10) + 'a';
			else
				buffer[i++] = aux + '0';
			p /= 16;
		}
		res_str = malloc(sizeof(char) * (i + 2));
		res_str[j++] = '0';
		res_str[j++] = 'x';
		i--;
		while (i >= 0)
			res_str[j++] = buffer[i--];
	}
	res_str[j] = '\0';
	return (res_str);
}
