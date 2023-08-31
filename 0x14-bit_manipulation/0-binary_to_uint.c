#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string that holds binary.
 *
 * Return: the converted number OR 0 if it failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, len;

	len = 0;
	while (b && b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	i = 0, n = 0;
	while (b && b[i])
	{
		if (b[i] == '1')
			n += 1 << (len - i - 1);
		i++;
	}
	return (n);
}
