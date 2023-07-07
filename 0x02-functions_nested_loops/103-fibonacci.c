#include "main.h"

/**
 * main - Prints the sum of even-valued Fibonacci
 * Return: default main 0
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, res;
	float sum;

	while (1)
	{
		res = fib1 + fib2;
		if (res > 4000000)
			break;
		if ((res % 2) == 0)
			sum += res;
		fib1 = fib2;
		fib2 = res;
	}
	printf("%.0f\n", sum);
	return (0);
}
