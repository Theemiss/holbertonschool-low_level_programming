#include "holberton.h"
#include<stdio.h>

/**
 * print_to_98 - count from n to 98.
 *@n:integer.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
