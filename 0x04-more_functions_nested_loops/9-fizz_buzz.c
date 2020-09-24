#include<stdio.h>
/**
 * main - Fizz buzz.
 *
 *Return:void.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
		printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
		printf("Buzz");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}
		putchar(' ');
	}
putchar('\n');
}
