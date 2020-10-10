#include <stdio.h>
#include <stdlib.h>
/**
 * main - display name of program
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	int x, i, j;

if (argc != 3)
{
	printf("Error\n");
}
else
{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	x = i * j;
	printf("%d\n", x);
}
return (0);
}
