#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: arguments vector
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s++;
	}

	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];

		str[i++] = '\n';
	}

	str[s] = '\0';

	return (str);
}
