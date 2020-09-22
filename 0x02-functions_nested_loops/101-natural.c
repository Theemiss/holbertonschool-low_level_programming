#include<stdio.h>
/**
 * main - count multiple.
 *
 * Return:void
 */
int main(void)
{
int a, b, s;
s = 0;
a = 0;
b = 0;
while (a < 1024)
{
 s = s + a;
 a = a + 3;
}
 while (b < 1024)
   {
     s = s + b;
     b = b + 5; 
   }
printf("%i\n", s);
}
