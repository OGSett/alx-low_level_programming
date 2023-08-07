#include "main.h"

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the file.
 * @letters: the number of letters.
 * Return: the actual number of letters it could read
 * and print if the file can not be opened or
 * read, return 0, if filename is NULL return 0
 * if write fails or does not write the expected
 * amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t input;
	size_t output;
	size_t check;
	char *str;

	check = -1;
	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	input = read(fd, str, letters);
	output = write(STDOUT_FILENO, str, input);
	if (output == check || input == check || fd == -1 || output != input)
	{
		free(str);
		return (0);
	}
	free(str);
	close(fd);
	return (output);
}
