#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area.
 *
 * @dest: the pointer to be filled with copied area.
 * @src: the pointer of characters to copy from.
 * @n: the num of index to fill.
 * Return: the copied pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
