#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 *
 * @s: the pointer to search.
 * @c: the character to look for.
 * Return: a pointer starting from given character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
		{
			return ('\0');
		}
		i++;
	}
	return (s + i);
}
