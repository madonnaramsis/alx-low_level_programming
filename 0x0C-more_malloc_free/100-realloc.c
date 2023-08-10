#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @old_size: the old size of the array.
 * @new_size: the new size of the array.
 * @ptr: the array to reallocate.
 *
 * Return: the created ptr or NULL if it fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *store, *new;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	store = ptr;
	new = malloc(new_size);
	if (new == NULL)
	{
		free(new);
		return (ptr);
	}
	i = 0;
	while (i < old_size)
	{
		new[i] = store[i];
		i++;
	}
	free(ptr);
	return (new);
}
