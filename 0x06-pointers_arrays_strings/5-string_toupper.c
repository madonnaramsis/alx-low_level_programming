#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: a pointer to the array.
 *
 * Return: changed string.
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] <= 'z' && a[i] >= 'a')
		{
			a[i] = (a[i] - 32);
		}
		i++;
	}
	return (a);
}
