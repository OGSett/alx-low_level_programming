#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the given as param
 * @str: given param
 * Return: pointer to the allocated space, NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *res;

	len = 0;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		len++;
		i++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[len] = '\0';
	return (res);
}
