#include "variadic_functions.h"

/**
 * sum_them_all - unction that returns the sum of all its parameters.
 * @n: first argument
 * Return:If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(list, n);
	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			sum = sum + va_arg(list, int);
			i++;
		}
	}
	va_end(list);
	return (sum);
}
