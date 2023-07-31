#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the pointer to search in.
 * @accept: the characters to look for.
 * Return: the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int loop1, loop2, i;

	loop1 = 0, i = 0;
	while (s[loop1] != '\0')
	{
		loop2 = 0;
		while (accept[loop2] != '\0')
		{
			if (s[loop1] == accept[loop2])
			{
				i++;
				break;
			}
			loop2++;
		}
		if (s[loop1] != accept[loop2])
		{
			break;
		}
		loop1++;
	}
	return (i);
}
