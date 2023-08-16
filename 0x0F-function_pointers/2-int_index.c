#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: the array of elements to search in.
 * @size: the size of the array.
 * @cmp: the function to check each element.
 *
 * Return: the index of matched element OR -1 if it fails or no match found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
