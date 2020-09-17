#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is postive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else  (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
