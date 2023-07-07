#include "main.h"

/**
 * main - program that  print the result of the multiplication
 * @ac: number of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int a;
	int b;
	int res;

	if (ac <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
}
