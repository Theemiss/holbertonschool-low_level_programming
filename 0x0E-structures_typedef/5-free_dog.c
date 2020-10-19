#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free dog
 * @d:pointer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
