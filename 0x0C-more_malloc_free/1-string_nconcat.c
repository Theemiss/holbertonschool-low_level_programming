#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - a function that concatenates two strings.
 *@s1 : pointer to string
 *@s2 : pointer to string
 *@n : integer
 *Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{



	unsigned int l1, l2, i, j;
	char *s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	if (n >= l2)
	n = l2;
	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
	return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	s[i] = s1[i];
	for (j = l1; j < l1 + n; j++)
	s[j] = s2[j - l1];
	s[j] = '\0';
	return (s);
}
