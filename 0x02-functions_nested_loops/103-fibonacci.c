#include <stdio.h>
/**
 * main - even libber abbaci
 *
 * Return: void
 */
int main(void)
{
	unsigned int i, j, y, k, s;

	i = 1;
	j = 2;
	y = 3;
	k = 2;
	for (s = 2; s <= 32; s++)
	{
		if (y % 2 == 0)
			k = k + y;
		i = j;
		j = y;
		y = i + j;
	}
	printf("%u\n", k);
	return (0);
}
