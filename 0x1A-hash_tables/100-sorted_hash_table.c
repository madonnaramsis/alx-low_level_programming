#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a shash table.
 *
 * @size: Size of the shash table array.
 *
 * Return: Created shash table OR NULL if something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * insert_first - Inserts shash node at the beginning.
 *
 * @h: The head of the linked list.
 * @key: The key of the node.
 * @val: The value that associated with the node.
 *
 * Return: The created node OR null if it fails.
 */
shash_node_t *insert_first(shash_node_t **h, const char *key, const char *val)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(val);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(val);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

/**
 * insert_dll - Inserts the node into dll of the shash table.
 *
 * @ht: The shash table to insert in.
 * @new: The node to insert.
 *
 * Return: Nothing
 */
void insert_dll(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - Inserts a new node to the shash table.
 *
 * @ht: The shash table to update.
 * @key: The key of the node.
 * @value: The value of the node.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	node = insert_first(&(ht->array[index]), key, value);

	if (node == NULL)
		return (0);

	insert_dll(ht, node);

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 *
 * @ht: The shash table to look into.
 * @key: The key to look for.
 *
 * Return: Returns the value associated with the element,
 * OR NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a shash table.
 *
 * @ht: The shash table to print.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag;

	if (ht == NULL)
		return;

	node = ht->shead, flag = 0;
	printf("{");
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a shash table in reverse.
 *
 * @ht: The shash table to print.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag;

	if (ht == NULL)
		return;

	node = ht->stail, flag = 0;
	printf("{");
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a shash table.
 *
 * @ht: The shash table to delete.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp_next;
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
