#include "main.h"
/**
 * _strcat - concatenates the string @src to the end of the string @dest
 * @dest: String that will be appended
 * @src: String to be concatenated
 * Return: returns string2 to string1
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
