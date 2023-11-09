#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: The hash table to search
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key is not found
 * Description: This function retrieves the value associated with a key in
 * a hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_node = NULL;
	unsigned long int key_idx;

	if (!ht || !key || !(ht->array))
		return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);

	for (hash_node = ht->array[key_idx]; hash_node; hash_node = hash_node->next)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
	}

	return (NULL);
}
