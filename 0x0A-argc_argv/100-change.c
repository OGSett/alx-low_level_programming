#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @ac: number of arguments
 * @av: arguments
 * Return: returns 1 if there is an error; else returns 0
 */

int main(int ac, char **av)
{
	int cents;
	int coins;

	coins = 0;
	if (ac != 2)
	{

		printf("Error\n");
		return (1);
	}
	cents = atoi(av[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
