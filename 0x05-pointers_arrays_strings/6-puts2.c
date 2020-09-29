#include "holberton.h"

/**
 * puts2 - print  every other character of a string
 * @str:pointer char
 * return:void
 */
void puts2(char *str)
{
	int i, x;
i = 0;
x = 0;
	while (str[i++])
	{
		x++;
	}
for (i = 0; i < x; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
