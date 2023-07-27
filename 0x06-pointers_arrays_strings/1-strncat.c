#include "main.h"
/**
 * _strncat -  concatenates two strings as provided number.
 * @dest: a pointer to the first string.
 * @src: a pointer to the second string.
 * @n: number of chars to concatenate.
 *
 * Return: (dest) concatenated array.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (n > 0 && src[i] != 0)
	{
		dest[a] = src[i];
		i++;
		a++;
		n--;
	}
	return (dest);
}
