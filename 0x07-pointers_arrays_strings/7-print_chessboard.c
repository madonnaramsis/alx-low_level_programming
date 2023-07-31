#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard.
 *
 * @a: the 2D array that contains the chessboard :D.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
