#include "holberton.h"

/**
 * _isupper - check uppercase character.
 * @c: integer.
 * Return: 0 succes.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
