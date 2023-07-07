#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 * Return: returns control to the calling func without returning any value.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
