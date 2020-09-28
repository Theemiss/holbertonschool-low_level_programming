#include "holberton.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(char *s)
{
	int i, x;

		for (i = 0; s[i] != '\0'; i++)
			x = i;

	return (x + 1);
}
