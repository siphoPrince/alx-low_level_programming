#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
/**
 *  hash_table_print - main function usd to Prints a hash table
 *
 *  @ht: The hash table pointer
 *
 *  Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;

	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	while (ht->size > index)
	{
		head = ht->array[index];

		while (head != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
		index++;
	}
	printf("}\n");
}
