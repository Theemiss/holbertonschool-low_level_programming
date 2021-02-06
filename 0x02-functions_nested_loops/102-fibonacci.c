#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 */
int main(void)
{
	long int a, b, s, i;

	a = 1;
	b = 2;
	s = 3;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", s);
		a = b;
		b = s;
		s = a + b;
	}
	printf("%ld\n", s);

	return (0);
}
