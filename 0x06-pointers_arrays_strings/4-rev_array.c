#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int x[n];

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		x[j] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = x[i];
	}
	a[i] = '\0';
}
