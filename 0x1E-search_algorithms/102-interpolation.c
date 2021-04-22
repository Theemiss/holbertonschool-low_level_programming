#include "search_algos.h"

/**
 * interpolation_search - implement  interpolation search  algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL && size == 0)
		return (-1);
	while ((array[high] != array[low]))
	{
		pos = low + ((value - array[low]) * (high - low) /
									(array[high] - array[low]));

		if (pos < 1 || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
