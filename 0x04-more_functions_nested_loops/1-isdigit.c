#include "holberton.h"

/**
* _isdigit - check digit.
* @c: integer
* Return: 1 succes
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
