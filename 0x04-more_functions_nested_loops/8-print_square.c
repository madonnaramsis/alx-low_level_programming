#include "main.h"
/**
 * print_square - draws a diagonal line in the terminal.
 * @size: length of the lines.
 *
 * Return: void.
 */
void print_square(int size)
{
	int a, b;

	size++;
	a = 1;
	if (size > a)
	{
		while (a < size)
		{
			b = 1;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
