#include<stdio.h>
/**
 * main - count multiple.
 *
 * Return:void
 */
int main(void)
{
int a, b, s;
for (a = 0; a < 1024 - 3;)
{
a = a + 3;
s = s + a;
}
for (b = 0; b < 1024 - 5;)
{
s = s + b;
b = b + 5;
}
printf("%i\n", s);
}
