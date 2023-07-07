#include "main.h"

/**
 * main - program that print _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
