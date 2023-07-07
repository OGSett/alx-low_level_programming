#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to print.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; a[i][7]; i++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[i][k]);
		_putchar('\n');
	}
}
