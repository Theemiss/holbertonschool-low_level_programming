#include "holberton.h"

/**
 * set_bit - set value to 1 with given index
 * @n:pointer to unsigned int
 * @index: unsigned int index
 * Return: 1 if succes -1 in case of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 1;

	if (sizeof(n) * 8 < index)
		return (-1);

x <<= index;
*n |= x;
return (1);
}
