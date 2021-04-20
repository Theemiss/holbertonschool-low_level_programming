#include "search_algos.h"

/**
 * jump_search - implement  jump search  algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0;
	int i = 0;
	int b = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	while (array[i] < value && i < (int) size)
	{
		b = i;
		i = b + jump;
		if (b < (int) size)
			printf("Value checked array[%d] = [%d]\n", b, array[b]);
	}

	if (b >= (int) size && array[size] != value)
		b -= jump;

	printf("Value found between indexes [%d] and [%d]\n", b, b + jump);

	while (array[b] < value)
	{
		if (b >= (int) size)
			break;
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b += 1;
	}

	if (array[b] == value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		return (b);
	}
	return (-1);
}
