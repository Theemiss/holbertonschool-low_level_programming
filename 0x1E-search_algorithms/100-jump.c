#include "search_algos.h"

/**
 * _sqrt - _sqrt
 *
 * @r: value
 * Return: _sqrt of the value
 * Descreption:i didn t know that i can  use sqrt so i tried creating one sike
 */
size_t _sqrt(size_t r)
{
	int start = 0, end = r;
	int mid, res;

	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == r)
		{
			res = mid;
			break;
		}
		if (mid * mid < r)
		{
			res = start;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (res);
}

/**
 * jump_search - implement  jump search  algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, jump = 0, i = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	while (array[i] < value && i < size)
	{
		index = i;
		i += index + jump;
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}
	if (index >= size && array[size] != value)
		index -= jump;
	printf("Value found between indexes [%ld] and [%ld]\n", index, index + jump);
	while (array[index] < value)
	{
		if (index >= size)
			break;
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index++;
	}
	if (array[index] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		return ((int)index);
	}
	return (-1);
}
