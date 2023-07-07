#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1:First str
 * @s2:Second str
 * Return: NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i;
	int k = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] || s2[i])
	{
		len++;
		i++;
	}
	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[k++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[k++] = s2[i];
		i++;
	}
	return (res);
}
