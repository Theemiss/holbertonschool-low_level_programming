#include "holberton.h"

/**
 * more_numbers - print 10 time from 0 to 14
 *
 *Return:void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			_putchar('0' + j / 10);
			}
			_putchar('0' +  j % 10);


		}
	_putchar('\n');
	}
}
