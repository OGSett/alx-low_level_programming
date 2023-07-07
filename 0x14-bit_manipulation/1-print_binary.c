#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: the binary num to be printed.
 */

void print_binary(unsigned long int n)
{
	int binary;
	int countz;

	binary = sizeof(n) * 8 - 1;
	countz = 1;
	while (binary >= 0)
	{
		if ((n >> binary) & 1)
		{
			_putchar('1');
			countz = 0;
		}
		else
		{
			if (!countz)
				_putchar('0');
		}
		binary--;
	}
	if (countz)
		_putchar('0');
}
