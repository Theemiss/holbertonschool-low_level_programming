#include <stdlib.h>
#include "holberton.h"

/**
 * get_flags - extract flags after % into a string
 * @s: string to extract from
 * @pos: position to start searching from (will be modified to mark
 * end of searching position)
 *
 * Return: string containing all the flags found
 */
char *get_flags(const char *s, unsigned int *pos)
{
	char *flags_arr = "-+ 0#";
	char *res_flags = NULL;
	unsigned int i, found;
	size_t size = 1;

	do {
		found = 0;
		i = 0;
		while (flags_arr[i] && !found)
		{
			if (s[(*pos) + 1] == flags_arr[i])
			{
				size += sizeof(char);
				res_flags = _realloc(res_flags, size - sizeof(char), size);
				if (res_flags == NULL)
				{
					free(res_flags);
					return (NULL);
				}
				res_flags[size - 2] = s[(*pos) + 1];
				found = 1;
				(*pos)++;
			}
			i++;
		}
	} while (found);
	if (res_flags != NULL)
		res_flags[size - 1] = '\0';
	return (res_flags);
}

/**
 * get_width - extract width field after %
 * @s: string to extract from
 * @pos: position to start searching from (will be modified to mark
 * end of searching position)
 *
 * Return: width integer or 0 for * or -1 if not found
 */
int get_width(const char *s, unsigned int *pos)
{
	int res_width = -1, found;

	if (s[(*pos) + 1] == '0')
		return (-1);
	if (s[(*pos) + 1] == '*')
	{
		(*pos)++;
		return (0);
	}
	do {
		found = 0;
		if (s[(*pos) + 1] >= '0' && s[(*pos) + 1] <= '9')
		{
			if (res_width < 0)
				res_width = s[(*pos) + 1] - '0';
			else
			{
				res_width *= 10;
				res_width += s[(*pos) + 1] - '0';
			}
			found = 1;
			(*pos)++;
		}
	} while (found);
	return (res_width);
}

/**
 * get_precision - extract precision field that starts with '.' and after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: precision integer or -1 for '.*' or -2 if not found
 */
int get_precision(const char *s, unsigned int *pos)
{
	int res_prec = 0, found;

	if (s[(*pos) + 1] != '.')
		return (-2);
	(*pos)++;
	if (s[(*pos) + 1] == '*')
	{
		(*pos)++;
		return (-1);
	}
	do {
		found = 0;
		if (s[(*pos) + 1] >= '0' && s[(*pos) + 1] <= '9')
		{
			if (res_prec == 0 && s[(*pos) + 1] != '0')
				res_prec = s[(*pos) + 1] - '0';
			else if (res_prec > 0)
			{
				res_prec *= 10;
				res_prec += s[(*pos) + 1] - '0';
			}
			found = 1;
			(*pos)++;
		}
	} while (found);
	return (res_prec);
}

/**
 * get_length - extract length field after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: string of 'l's and 'h's or NULL if not found
 */
char *get_length(const char *s, unsigned int *pos)
{
	char *length_arr = "hl";
	char *res_length = NULL;
	int i, found;
	size_t size = 1;

	do {
		found = 0;
		i = 0;
		while (length_arr[i] && !found)
		{
			if (s[(*pos) + 1] == length_arr[i])
			{
				size += sizeof(char);
				res_length = _realloc(res_length, size - sizeof(char), size);
				if (res_length == NULL)
				{
					free(res_length);
					return (NULL);
				}
				res_length[size - 2] = s[(*pos) + 1];
				found = 1;
				(*pos)++;
			}
			i++;
		}
	} while (found);
	if (res_length != NULL)
		res_length[size - 1] = '\0';
	return (res_length);
}


/**
 * get_specifier - extract specifier field after %
 * @s: string to extract from
 * @pos: position to start extractong from (will be modified to mark
 * end of search position)
 *
 * Return: specifier char or NULL if not found
 */
char get_specifier(const char *s, unsigned int *pos)
{
	char *spec_arr = "cs%dibuoxXSprR";
	int i;

	for (i = 0; spec_arr[i]; i++)
	{
		if (spec_arr[i] == s[(*pos) + 1])
		{
			(*pos)++;
			return (spec_arr[i]);
		}
	}
	return (0);
}
