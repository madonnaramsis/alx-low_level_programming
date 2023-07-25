#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string.
 * @str: a pointer to the string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
