#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, y;

	i = 48;
	j = 49;
	y = 50;
	while  ((i < 56) && (j < 57) && (y < 58))
	{
		putchar(i);
		putchar(j);
		putchar(y);
		if ((i == 55) && (j == 56) && (y == 57))
		{
			putchar('\n');
			i++;
			j++;
			y++;
		}
		else
		{
			putchar(',');
			putchar(' ');
			if (y < 57)
			{
				y++;
			}
			else if ((j < 56) && (y == 57))
			{
				y = 1 + ++j;
			}
			else
			{
				j = ++i + 1;
				y = j + 1;
			}
		}
	}
	return (0);
}
