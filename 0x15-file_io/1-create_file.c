#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: file to be created.
 * @text_content: the text needs to be stored in the file.
 * Return: Returns: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int output;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	output = write(fd, text_content, len);
	if (output == -1 || output != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
