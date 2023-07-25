#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: a pointer to the string.
 *
 * Return: void.
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
