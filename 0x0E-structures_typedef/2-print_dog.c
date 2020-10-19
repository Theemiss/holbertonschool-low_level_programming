#include <stdio.h>
#include "dog.h"
/**
 *print_dog - a function that prints a struct dog
 *@d : pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if (d->name == NULL)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
}
