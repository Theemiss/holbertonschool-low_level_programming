#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht:hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
