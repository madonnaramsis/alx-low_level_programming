#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number to look into.
 * @index: the index to return.
 *
 * Return: the value of the bit at given index OR (-1) if failed.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((!n && n != 0) || (!index && index != 0) || index > 63)
		return (-1);
	while (index != 0)
		n >>= 1, index--;
	return (n & 1);
}
