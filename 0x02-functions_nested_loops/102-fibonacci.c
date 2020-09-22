#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 */
int main(void)
{
int a, b, s, i;
a = 1;
b = 2;
s = 3;
printf("%i, ", a);
printf("%i, ", b);
for (i = 3; i < 50; i++)
{
printf("%i, ", s);
a = b;
b = s;
s = a + b;
}
printf("%i\n", s);
return (0);
}
