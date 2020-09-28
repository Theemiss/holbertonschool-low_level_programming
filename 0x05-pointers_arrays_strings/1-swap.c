#include "holberton.h"

/**
 * swap_int - swaping 2 integer using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;

}
