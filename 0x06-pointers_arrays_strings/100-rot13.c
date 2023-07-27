#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13.
 * @a: a pointer to the string.
 *
 * Return: encoded string.
 */
char *rot13(char *a)
{
	int i = 0, o = 13;

	while (a[i] != '\0')
	{
		while ((a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A'))
		{
			if ((a[i] <= 'z' && a[i] >= 'n') || (a[i] <= 'Z' && a[i] >= 'N'))
			{
				a[i] = (a[i] - o);
				break;
			}
			a[i] = (a[i] + o);
			break;
		}
		i++;
	}
	return (a);
}
