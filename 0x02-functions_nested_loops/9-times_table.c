#include "main.h"

/**
 * times_table - a function that print 9 times table
 * ar = row, ac = colum and res = result of current colum
 * Return: times x9 table
 */

void times_table(void)
{
	int ar, ac, res;


	for (ar = 0; ar <= 9; ar++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (ac = 1; ac <= 9; ac++)
		{
			res = (ar * ac);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');
			if (ac < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
