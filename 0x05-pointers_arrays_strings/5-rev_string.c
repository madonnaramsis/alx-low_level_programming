#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: a pointer to the string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char *rev1 = s, *rev2 = s, r;

	while (*rev1 != '\0')
	{
		rev1++;
	}
	rev1--;
	while (rev2 < rev1)
	{
		r = *rev2;
		*rev2 = *rev1;
		*rev1 = r;
		rev1--;
		rev2++;
	}
}
