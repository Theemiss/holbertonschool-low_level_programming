
#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a new type
 *@name : string
 *@age : float
 *@owner : string
 *Description: a new type that contains dog name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
