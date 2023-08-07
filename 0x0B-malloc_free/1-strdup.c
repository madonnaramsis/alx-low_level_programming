#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the address of memory to create a copy of it.
 *
 * Return: the created ptr.
 */
char *_strdup(char *str)
{
	unsigned int i, o;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
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
		ptr[o] = str[o];
		o++;
	}
	return (ptr);
}
