#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337.
 * @a: a pointer to the string.
 *
 * Return: encoded string.
 */
char *leet(char *a)
{
	int i = 0, o;
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char ncode[5] = {'4', '3', '0', '7', '1'};

	while (a[i] != '\0')
	{
		o = 0;
		while (o < 5)
		{
			if (a[i] == upper[o] || a[i] == lower[o])
			{
				a[i] = ncode[o];
			}
			o++;
		}
		i++;
	}
	return (a);
}
