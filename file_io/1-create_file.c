#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of created file
 * @text_content: a NULL terminated string to write to the file
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{

		}
		write(fd, text_content, i);
	}
	close(fd);

	return (1);
}
