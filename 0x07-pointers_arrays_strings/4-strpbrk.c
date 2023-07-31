#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: the pointer to search in.
 * @accept: the characters to look for.
 * Return: a pointer starting from matched character.
 */
char *_strpbrk(char *s, char *accept)
{
	int loop1, loop2;

	loop1 = 0;
	while (s[loop1] != '\0')
	{
		loop2 = 0;
		while (accept[loop2] != '\0')
		{
			if (s[loop1] == accept[loop2])
			{
				return (s + loop1);
			}
			loop2++;
		}
		loop1++;
	}
	return (NULL);
}
