#include "main.h"

/**
 * main - program that print the number of its arguments
 * @ac: number of args
 * @av: the arguments
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i;

	if (ac == 1)
		printf("%d\n", ac - 1);
	else
	{
		i = 0;
		while (*av != NULL)
		{
			i++;
			av++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
