#include "main.h"

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of elements
 * @size: the size of memory block needed
 * Return: pointer to the adress of memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c != NULL)
	{
		i = 0;
		while (i < (nmemb * size))
		{
			c[i] = 0;
			i++;
		}
		return (c);
	}
	return (NULL);
}
