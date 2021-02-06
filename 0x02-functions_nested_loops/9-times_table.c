#include "holberton.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, y, d, e;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			y = i * j;
			d = y / 10;
			e = y % 10;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (y < 10)
			{
				_putchar(' ');
				_putchar('0' + e);
			}
			else
			{
				_putchar('0' + d);
				_putchar('0' + e);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
