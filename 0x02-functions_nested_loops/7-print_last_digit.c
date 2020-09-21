#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
