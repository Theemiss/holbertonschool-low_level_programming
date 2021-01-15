#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of the array of hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
