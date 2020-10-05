#include "holberton.h"
/**
 * _strchr - locate a character in a string
 * @s:string
 * @c:char
 * Return:pointer to char*
 */
char *_strchr(char *s, char c)
{

	do		{

		if (*s == c)
			{
			break;
			}
		}	while (*s++);

return (s);
}
