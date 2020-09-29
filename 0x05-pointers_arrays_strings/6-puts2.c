#include "holberton.h"

/**
 * puts2 - print  every other character of a string
 * @str:pointer char
 * return:void
 */
void puts2(char *str)
{
	int i;
i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
	}
_putchar('\n');
}
