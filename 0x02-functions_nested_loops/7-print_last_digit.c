#include "holberton.h"

/**
 * print_last_digit - display last digit.
 * @x:integer.
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	int y, e;

	y = x % 10;
	if (y < 0)
	{
		y = -y;
	}
	e = '0' + y;
	_putchar(e);
	return (y);
}
