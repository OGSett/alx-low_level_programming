#include "main.h"

/**
 * jack_bauer - a function that prints every h and m of the day
 * from 00:00 to 23:59
 * return: 1440 line output
 */

void jack_bauer(void)
{
	int	h = 0;
	int	m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
