#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: he converted number, or 0 if
 * there is one or more chars in the string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int i;

	res = 0;
	i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			res = res << 1;
		else if (b[i] == '1')
			res = (res << 1) | 1;
		else
			return (0);
		i++;
	}
	return (res);
}
