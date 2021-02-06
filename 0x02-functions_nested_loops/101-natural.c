#include<stdio.h>
/**
 * main - count multiple.
 *
 * Return:void
 */
int main(void)
{
	int a, b, s, x, y;

	s = 0;
	for (a = 0; a <= (1024  / 3); a++)
	{
		y = a * 3;
		s = s + y;
	}
	for (b = 0; b < (1024 / 5); b++)
	{
		if (!(b % 3 == 0))
		{
			x = b * 5;
			s = s + x;
		}
	}
	printf("%i\n", s);

	return (0);
}
