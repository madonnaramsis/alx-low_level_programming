#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: the created ptr.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, o, p;
	char *ptr;

	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		i++;
	}
	o = 0;
	while (s2 != NULL && s2[o] != '\0')
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
		while (s2 != NULL && s2[p] != '\0')
		{
			ptr[o] = s2[p];
			o++;
			p++;
		}
	}
	return (ptr);
}
