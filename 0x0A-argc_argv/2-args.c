#include "main.h"

/**
 * main - progran that print its arguments
 * @ac: number of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
