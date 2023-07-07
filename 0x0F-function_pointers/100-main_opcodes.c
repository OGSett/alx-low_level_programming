#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print the opcodes of its own main func
 * @ac: number of args
 * @av: arguments
 * Return: 1 or 2 if it fails
 */

int main(int ac, char *av[])
{
	int i, b;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(av[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < b)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);
		if (i == b - 1)
			continue;
		printf(" ");
		address++;
		i++;
	}
	printf("\n");
	return (0);
}
