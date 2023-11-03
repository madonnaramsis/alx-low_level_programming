#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table to delete.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp_next;
	unsigned long int i;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		tmp_next = ht->array[i];
		while ((tmp = tmp_next) != NULL)
		{
			tmp_next = tmp_next->next;
			free(tmp->key), free(tmp->value), free(tmp);
		}
		i++;
	}

	free(ht->array), free(ht);
}
