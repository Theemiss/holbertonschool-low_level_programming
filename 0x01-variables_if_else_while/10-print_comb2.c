#include<stdlib.h>
#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;

	for (i = 48; i <=  57; i++)
	{
		j = 48;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if ((i == 57) && (j == 57))
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	return (0);
}
