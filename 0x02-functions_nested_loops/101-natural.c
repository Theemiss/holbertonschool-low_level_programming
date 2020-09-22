#include<stdio.h>
/**
 * main - count multiple.
 *
 * return void
 */
int main (void)
{
int a, b ,s;
s = 0;
a = 0;
b = 0;
while( s < 1024)
{
a = a + 3;
b = b + 5;
s = a + b;
}
printf("%i\n",s);
}
