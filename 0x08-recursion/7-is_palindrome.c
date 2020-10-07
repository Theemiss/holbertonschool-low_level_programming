#include "holberton.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @i:int
 * @j:int
 * @s: string
 * Return: int
 */
int check_palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check_palindrome(i + 1, j - 1, s));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s:string
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
