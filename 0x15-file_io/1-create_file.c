#include "main.h"

/**
 * create_file - Creates a file and writes a string of text to it.
 *
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to the string to write to the file.
 *
 * Return: If successful, return 1, otherwise returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wt;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wt = write(fd, text_content, len);
	if (wt == -1)
	{
		close(fd);
		return (-1);
	}
	
	if (close(fd) == -1)
		return (-1);
	return (1);
}
