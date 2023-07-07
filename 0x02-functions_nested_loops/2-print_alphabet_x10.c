#include "main.h"

/**
 * print_alphabet_x10 - function that print 10 times
 * a string with alphabets
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int start = 'a';

	while (i < 10)
	{
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		start = 'a';
		i++;
		_putchar('\n');
	}
}
