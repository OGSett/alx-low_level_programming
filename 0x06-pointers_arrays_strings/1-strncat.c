#include "main.h"
/**
 * _strncat - concatenate two strings but add the number of bytes
 * @dest: string to be appended
 * @src: string to be completed after src
 * @n:integer parameter to compare index to
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
