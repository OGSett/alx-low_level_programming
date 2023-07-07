#include "main.h"

/**
 * factorial - search for factorial number
 * @n: number to search into
 * Return: return the factorial number found
 */

int factorial(int n)
{
	int i;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	i = factorial(n - 1);
	return (n * i);
}
