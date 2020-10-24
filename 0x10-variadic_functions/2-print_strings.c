#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_strings - print strings
 * @separator:char
 * @n:unsigned int
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

va_start(list, n);
	for (i = 0; i < n - 1 ; i++)
	{
	str = va_arg(list, char*);

		if (str)
			{
			printf("%s", str);
			}
		else
			{
				printf("(nil)");
			}
				if (separator)
				{
					printf("%s", separator);
				}
	}
		str = va_arg(list, char*);
	if (str)
	{
		printf("%s\n", str);
	}
	else
	{
		printf("(nil)\n");
	}
va_end(list);
}
