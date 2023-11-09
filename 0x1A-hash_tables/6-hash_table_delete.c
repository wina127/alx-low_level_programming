#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Description: This function deletes a hash table by freeing the memory
 * allocated for each key-value pair and the hash table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash_node, *temp;
	unsigned long int i;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		hash_node = ht->array[i];

		while (hash_node)
		{
			temp = hash_node;
			hash_node = hash_node->next;

			free(temp->value);
			free(temp->key);
			free(temp);
		}

		i++;
	}

	free(ht->array);
	free(ht);
}
