#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: source string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
