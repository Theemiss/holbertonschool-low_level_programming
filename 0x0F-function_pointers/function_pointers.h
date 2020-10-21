void print_name(char *name, void (*f)(char *));
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));