#include "main.h"

/**
 * get_endianness - checks whether a machine is big endian or little
 * Return: 1 if little true, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int check;
	char *str;

	check = 1;
	str = (char *)&check;
	if (*str)
		return (1);
	return (0);
}
