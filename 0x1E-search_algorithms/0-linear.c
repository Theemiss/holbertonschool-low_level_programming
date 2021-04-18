#include "search_algos.h"

/**
 * linear_search - implement  linear search  algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%li]= [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%li]= [%d]\n", i, array[i]);
		}
	}
	return (-1);

}
