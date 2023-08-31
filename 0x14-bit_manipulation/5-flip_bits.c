#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: Number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 1UL) != (m & 1UL))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
