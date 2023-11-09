#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: The hash table to modify
 * @key: The key to add or update
 * @value: The value to associate with the key
 * Return: 1 if the element is successfully added or updated, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *hash_node = NULL;
	unsigned long int key_idx;
	char *new_key = NULL, *new_value = NULL;

	if (!ht || !key || !(ht->array))
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);

	hash_node = ht->array[key_idx];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
		{
			free(hash_node->value);
			hash_node->value = strdup(value);
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_key = strdup(key);
	new_value = strdup(value);
	if (new_key == NULL || new_value == NULL)
	{
		free(new_node);
		free(new_key);
		free(new_value);
		return (0);
	}

	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;

	return (1);
}
