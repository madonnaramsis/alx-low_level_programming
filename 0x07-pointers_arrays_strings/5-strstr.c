#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: the string to search in.
 * @needle: the string to look for.
 * Return: the location of substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int o;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		o = 0;
		if (haystack[o] == needle[o])
		{
			while (haystack[o] == needle[o])
			{
				if (needle[o + 1] == '\0')
					return (haystack);
				o++;
			}
		}
		haystack++;
	}
	return ('\0');
}
