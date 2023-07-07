#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
