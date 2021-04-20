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
	size_t left = 0;
	size_t right = sqrt(size);

	if (!array)
		return (-1);
	while (array[right < size ? right : size - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left = right;
		right = right + sqrt(size);
		if (right >= size)
			break;
	}
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	while (array[left] <= value)
	{

		if (left == (right < size ? right : size))
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
