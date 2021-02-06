#include "holberton.h"

/**
 * _abs - check abs .
 * @x: integer.
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x = x * -1);
	}
	else
		return (0);
}
