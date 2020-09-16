#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
long int longintType;
long long int longlongintType;
float floatType;
char charType;
printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(intType));
printf("Size of a long long int: %ld byte(s)\n",sizeof(longintType));
 printf("Size of a long long int: %ld byte(s)\n",sizeof(longlongintType));
printf("Size of float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
