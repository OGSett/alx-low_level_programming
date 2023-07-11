#include "main.h"
char *create_buf(char *file);
void closing(int fd);

/**
 * create_buf - Allocates bytes for a buffer.
 * @file: The  buffer is storing chars for.
 * Return: A pointer to the new buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * closing - Closes file descriptor.
 * @fd: The file descriptor needs to closed.
 */
void closing(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments
 * @av: arguments.
 * Return: 0 on success.
 */
int main(int ac, char *av[])
{
	int from, to, s, y;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buf(av[2]);
	from = open(av[1], O_RDONLY);
	s = read(from, buf, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || s == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}

		y = write(to, buf, r);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buf);
			exit(99);
		}

		s = read(from, buf, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (s > 0);

	free(buf);
	closing(from);
	closing(to);

	return (0);
}

