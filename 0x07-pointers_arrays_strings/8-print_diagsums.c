#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of 2 digona
 * @a:int
 * @size:int size
 * Return:void
 */
void print_diagsums(int *a, int size)
{
int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
