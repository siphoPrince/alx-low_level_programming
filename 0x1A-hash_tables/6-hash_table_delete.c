#include <stddef.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  hash_table_delete - Delete a table
 *
 *  @ht: The hash table pointer
 *
 *  Return: Void or null
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->array);
	free(ht);
}
