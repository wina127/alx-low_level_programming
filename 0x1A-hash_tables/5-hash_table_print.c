#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table to print
 *
 * Description: This function prints the key-value pairs of a hash table
 * in the format '{key: value}'.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_node;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		hash_node = ht->array[i];

		while (hash_node)
		{
			if (flag)
				printf(", ");

			printf("'%s': '%s'", hash_node->key, hash_node->value);
			hash_node = hash_node->next;

			flag = 1;
		}

		i++;
	}

	printf("}\n");
}
