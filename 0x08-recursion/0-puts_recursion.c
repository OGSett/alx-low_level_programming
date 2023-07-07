#include "main.h"

/**
 * _puts_recursion - print a string with a new line
 * @s: string to be printed
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(++s);
	}
}
