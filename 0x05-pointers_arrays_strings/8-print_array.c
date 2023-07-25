#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array, followed by a new line.
 * @a: a pointer to the array.
 * @n: a number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *a);
		a++;
		if (n > 1)
		{
			printf(", ");
		}
		n--;
	}
	putchar('\n');
}
