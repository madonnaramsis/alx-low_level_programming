#include "main.h"
#include <stdio.h>
/**
 * _strcmp -  compares two strings.
 * @s1: a pointer to the first string.
 * @s2: a pointer to the second string.
 *
 * Return: (result) s1[a] - s2[a] when a difference found.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, result = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			result = (s1[a] - s2[a]);
			break;
		}
		a++;
	}
	return (result);
}
