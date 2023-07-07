#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
