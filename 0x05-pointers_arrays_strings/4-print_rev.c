#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);
	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
/**
 * _strlen - calculate the lenght of a string
 * @str: string to be calculated
 * Return: lenght
 */
int     _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
