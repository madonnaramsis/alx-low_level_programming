#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of bytes to copy from s2.
 *
 * Return: the created ptr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, o, p;
	char *ptr;

	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (o < n && s2 != NULL && s2[o] != '\0')
	{
		o++;
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	o = 0;
	while (o < i)
	{
		p = 0;
		while (s1 != NULL && s1[p] != '\0')
		{
			ptr[o] = s1[p];
			o++;
			p++;
		}
		p = 0;
		while (p < n && s2 != NULL && s2[p] != '\0')
		{
			ptr[o] = s2[p];
			o++;
			p++;
		}
	}
	ptr[o] = '\0';
	return (ptr);
}
