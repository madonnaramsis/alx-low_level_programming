#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @dest: a pointer to the first string.
 * @src: a pointer to the second string.
 *
 * Return: (dest) concatenated array.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != 0)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	return (dest);
}
