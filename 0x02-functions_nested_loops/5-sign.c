#include "main.h"

/**
 * print_sign - faction that print the sign ofa number
 * Return: 1 if (n > 0) , 0 if (n == 0) and -1 if (n < 0)
 * @n: input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
