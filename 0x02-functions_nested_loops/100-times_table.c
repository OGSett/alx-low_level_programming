#include "main.h"

/**
 * print_times_table - functin that print table time of the input
 * @n: input
 * Return: printed tables
 */

void print_times_table(int n)
{
	int num = 0;
	int mult = 1;
	int res;


	if (n >= 0 && n <= 15)
	{
		while (num <= n)
		{
			_putchar('0');
			while (mult <= n)
			{
				_putchar(',');
				_putchar(' ');
				res = num * mult;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
				mult++;
			}
			mult = 1;
			num++;
			_putchar('\n');
		}
	}
}
