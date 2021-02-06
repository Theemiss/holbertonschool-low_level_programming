#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory to reallocate
 * @old_size: size of memory to reallocate
 * @new_size: new memory size
 *
 * Return: pointer to the new memory or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(old_ptr);
	return (new_ptr);
}
