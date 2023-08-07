#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the memory to create.
 * @c: the address of memory to create.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
	}
	return (ptr);
}
