#include "main.h"

/**
 * _strlen_recursion - calculate length of a string
 * @s: string to be calculated
 * Return: lenght of the string calculated
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
