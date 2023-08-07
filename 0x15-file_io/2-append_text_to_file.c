#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the included file.
 * @text_content: text to append to the file.
 * Return: 1 on success, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int output;
	int len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		output = write(fd, text_content, len);
		if (output == -1 || output != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
