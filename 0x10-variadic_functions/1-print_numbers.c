#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variadic number
 * @separator: char
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
for ( i = 0; i < n - 1; i++)
{
	printf("%d", va_arg(list, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
}
printf("%d", va_arg(list, int));
va_end(list);
printf("\n");
}
