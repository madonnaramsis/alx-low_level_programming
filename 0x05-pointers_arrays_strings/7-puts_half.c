#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new lioe.
 * @str: a pointer to the string.
 *
 * Returo: void.
 */
void puts_half(char *str)
{
	int i, o;

	for (i = 0; str[i] != '\0'; ++i)
		;

	if (i % 2 == 0)
	{
		for (o = i / 2; str[o] != '\0'; ++o)
			_putchar(str[o]);
	} else
	{
		for (o = ((i - 1) / 2) + 1; str[o] != '\0'; ++o)
			_putchar(str[o]);
	}
	_putchar('\n');
}
