#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * buffer_print - print given buffer to stdout
 * @buffer: buffer to print
 * @nbytes: number of bytes to print
 *
 * Return: nbytes
 */
int buffer_print(char buffer[], unsigned int nbytes)
{
	write(1, buffer, nbytes);
	return (nbytes);
}

/**
 * buffer_add - adds a string to buffer
 * @buffer: buffer to fill
 * @str: str to add
 * @buffer_pos: pointer to buffer first empty position
 *
 * Return: if buffer filled and emptyed return number of printed char
 * else 0
 */
int buffer_add(char buffer[], char *str, unsigned int *buffer_pos)
{
	int i = 0;
	unsigned int count = 0, pos = *buffer_pos, size = BUFFER_SIZE;

	while (str && str[i])
	{
		if (pos == size)
		{
			count += buffer_print(buffer, pos);
			pos = 0;
		}
		buffer[pos++] = str[i++];
	}
	*buffer_pos = pos;
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed excluding the null byte
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, buffer_pos = 0, count = 0;
	char *res_str, *aux, buffer[BUFFER_SIZE];

	if (!format || !format[0])
		return (-1);
	va_start(ap, format);
	aux = malloc(sizeof(char) * 2);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			res_str = treat_format(format, &i, ap);
			count += buffer_add(buffer, res_str, &buffer_pos);
			free(res_str);
		}
		else
		{
			aux[0] = format[i++];
			aux[1] = '\0';
			count += buffer_add(buffer, aux, &buffer_pos);
		}
	}
	count += buffer_print(buffer, buffer_pos);
	free(aux);
	va_end(ap);
	if (!count)
		count = -1;
	return (count);
}
