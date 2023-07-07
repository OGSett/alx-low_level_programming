#include "main.h"

/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: default main 0
 */

int main(void)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			res = res + i;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
