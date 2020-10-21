#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array:int
 * @size:int
 * @cmp:function
 * Return:index of the integer searched for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
	{
		return (-1);
	}
		if (size && cmp != NULL && array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				x = cmp(array[i]);
				if (x != 0)
					return (i);
			}
		}
	return (-1);

}
