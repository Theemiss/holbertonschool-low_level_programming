#include "holberton.h"

/**
 *print_times_table - print time table.
 * @n: integer.
 *Return:void.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar(((k % 100) % 10) + '0');
				}
				if (j < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

