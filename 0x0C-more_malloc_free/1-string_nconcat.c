#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to s1
 * Return: return null if it fails,
 * or a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len;
	unsigned int i;

	len = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
	{
		i++;
		len++;
	}
	c = malloc(sizeof(char) * (len + 1));
	if (c == NULL)
		return (NULL);
	len = 0;
	i = 0;
	while (s1[i])
	{
		c[len] = s1[i];
		i++;
		len++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		c[len] = s2[i];
		i++;
		len++;
	}
	c[len] = '\0';
	return (c);
}
