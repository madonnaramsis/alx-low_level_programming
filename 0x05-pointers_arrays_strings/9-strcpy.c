#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src, including (\0)
 * to the buffer pointed to by dest.
 * @dest: a pointer to the string.
 * @src: an array of chars.
 *
 * Return: (dest) coppied array.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
