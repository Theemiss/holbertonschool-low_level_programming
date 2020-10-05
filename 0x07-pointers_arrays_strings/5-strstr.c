#include "holberton.h"
/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
 */
char *_strstr(char *haystack, char *needle)
{
int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;

			} while (haystack[x] == needle[x]);
		}

		haystack++;
	}

	return ('\0');
}
