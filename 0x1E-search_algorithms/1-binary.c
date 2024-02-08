#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: the first index where value is located,
 * OR (-1) if value is not present.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1, mid = (start + end) / 2;
		else if (array[mid] > value)
			end = mid - 1, mid = (start + end) / 2;
		else
			return (mid);
	}

	return (-1);
}
