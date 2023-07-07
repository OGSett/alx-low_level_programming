 #include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to power of y
 * @x: base
 * @y: exponent
 * Return: the value of x raised by power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
