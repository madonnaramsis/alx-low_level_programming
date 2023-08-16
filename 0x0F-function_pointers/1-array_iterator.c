#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the array of elements to excute.
 * @size: the size of the array.
 * @action: the function to excute.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		i = 0;
		while (i < (int)size)
		{
			action(array[i]);
			i++;
		}
	}
}
