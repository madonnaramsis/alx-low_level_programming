#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the pointer to be filled.
 * @b: the character to fill.
 * @n: the num of index to fill.
 * Return: the filled pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
