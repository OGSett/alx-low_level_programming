#include "main.h"

/**
 * get_bit - a function that returns the value
 * of a bit at a given index.
 * @n: the num
 * @index: index of the bit required
 * Return: the extracted value, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
