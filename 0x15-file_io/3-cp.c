#include "main.h"

/**
 * main - copies content of file to another
 * @ac: number of args
 * @av: args
 * Return: 0 (Success)
 */

int main(int ac, char **av)
{
	int from;
	int to;
	ssize_t readc;
	char buffer[BUFFER_SIZE];

	readc = 0;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage : cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	while ((readc = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		if (to < 0 || write(to, buffer, readc) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (readc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(from) == -1 || close(to) == -1)
	{
		if (close(from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		if (close(to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
