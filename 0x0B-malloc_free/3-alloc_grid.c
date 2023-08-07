#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the number of elements for each array.
 * @height: the number of arrays.
 *
 * Return: the created ptr.
 */
int **alloc_grid(int width, int height)
{
	int i, o;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		o = 0;
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		while (o < width)
		{
			ptr[i][o] = 0;
			o++;
		}
		i++;
	}
	return (ptr);
}
