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
s = 0;
for (i = 0; i < 50; i++)
{
s = a + b;
a = b;
b = s;
printf("%i\n", s);
}
return (0);
}
