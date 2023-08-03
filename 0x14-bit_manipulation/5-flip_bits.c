#include "main.h"

/**
 * flip_bits - a function that returns
 * the number of bits you would need to
 * flip to get from one number to another.
 * @n: in number.
 * @m: final number.
 * Return: counter of flipped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int done;
	unsigned int count;

	done = n ^ m;
	count = 0;
	while (done != 0)
	{
		count += done & 1;
		done >>= 1;
	}
	return (count);
}
