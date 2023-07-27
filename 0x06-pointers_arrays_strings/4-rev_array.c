#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: a pointer to the array.
 * @n: the number of elements.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0, b = n - 1, save;

	while (b > i)
	{
		save = a[i];
		a[i] = a[b];
		a[b] = save;
		i++;
		b--;
	}
}
