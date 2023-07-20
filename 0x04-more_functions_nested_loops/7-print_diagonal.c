#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: length of the lines.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int a = 1, b = 1, c = 0;

	n++;
	if (n > a)
	{
		while (a < n)
		{
			while (b <= a)
			{
				c = 0;
				while (c < b)
				{
					if (c != 0)
					{
						_putchar(' ');
					}
					c++;
				}
				_putchar('\\');
				_putchar('\n');
				b++;
			}
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
