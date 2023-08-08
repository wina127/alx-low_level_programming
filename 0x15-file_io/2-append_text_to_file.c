#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the string to add to the end of the file.
 *
 * Return: if the function fails or @filename is NULL - -1.
 * If the file does not exist or the user lacks write permissions - -1.
 * else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
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
