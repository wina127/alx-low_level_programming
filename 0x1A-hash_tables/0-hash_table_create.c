#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of array
 * Return: New hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs = malloc(sizeof(hash_table_t));

	if (!hs)
		return (NULL);

	hs->size = size;
	hs->array = calloc(size, sizeof(hash_node_t *));
	if (!hs->array)
	{
		free(hs);
		return (NULL);
	}

	return (hs);
}
