#include "main.h"

/**
 * is_prime_number - returns true if the number is prime
 *@n: the number to be checked
 *Return: true if the number is prime
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, i));
}

/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @i: number where to start
 * Return: 1 if n is prime, 0 i not
 */

int is_prime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
