#include "main.h"

/**
 * main - program that write its name
 * @ac: number of arguments
 * @av: arguments
 * Return: 0 (Success)
 */

int main(int ac __attribute__((unused)), char **av)
{
	int i;

	i = 0;
	while (av[0][i] != '\0')
	{
		_putchar(av[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

