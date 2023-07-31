#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: a pointer to the 2D array.
 * @size: the number of square indexs.
 */
void print_diagsums(int *a, int size)
{
	int i, o, sum1, sum2;

	i = 0, o = 0, sum1 = 0;
	while (o < size)
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
		o++;
	}
	i = size - 1, sum2 = 0;
	while (o > 0)
	{
		o--;
		sum2 = sum2 + a[i];
		i = (i + size) - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
