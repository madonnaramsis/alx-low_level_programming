#include "main.h"
#include <stdio.h>
/**
 * ifseparator - check if the character is a separator.
 * @a: the character to check.
 *
 * Return: (1) if it's a separator, (0) if it's not.
 */
int ifseparator(char a)
{
	int i = 0;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}'};

	while (sep[i] != '\0')
	{
		if (a == sep[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 * @a: a pointer to the array.
 *
 * Return: capitalized words array.
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[0] <= 'z' && a[0] >= 'a')
		{
			a[0] = (a[0] - 32);
		}
		if (ifseparator(a[i - 1]) == 1 && (a[i] <= 'z' && a[i] >= 'a'))
		{
			a[i] = (a[i] - 32);
		}
		i++;
	}
	return (a);
}
