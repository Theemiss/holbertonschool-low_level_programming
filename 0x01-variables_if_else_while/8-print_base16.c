#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c  <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
