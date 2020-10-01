#include "holberton.h"
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
char *s = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
