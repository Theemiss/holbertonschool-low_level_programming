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
