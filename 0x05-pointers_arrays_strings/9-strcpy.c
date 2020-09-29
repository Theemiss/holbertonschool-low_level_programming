#include "holberton.h"

/**
 * _strcpy - copies  src to  dest.
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
dest[i] = '\0';
return (dest);
}
