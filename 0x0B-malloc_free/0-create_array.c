#include "main.h"

/**
 * create_array - a function that create and
 *	reserve a space in memory for the resrned string
 * @size:  lenght of the string needs to be mallocated
 * @c: the character to initialze
 * Return: string , or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *res;

	i = 0;
	if (size <= 0)
		return (NULL);
	res = malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = c;
		i++;
	}
	return (res);
}
