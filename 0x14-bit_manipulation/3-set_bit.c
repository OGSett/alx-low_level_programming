#include "main.h"

/**
 * set_bit - a function that sets the
 * value of a bit to 0 at a given index.
 * @n: the num
 * @index: index to set
 * Return: always 1, -1 in case of errors.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
