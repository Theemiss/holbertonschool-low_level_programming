
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **new_dog - a function that creates a new dog.
 *@name : pointer to a string
 *@age : float
 *@owner : pointer to a string
 *Return: new type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
