#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to the first int.
 * @b: a pointer to the second int.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	unsigned int swap;

	swap = *a, *a = *b, *b = swap;
}
