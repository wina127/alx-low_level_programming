#include "main.h"
/**
 * check - checks if the file exists
 * @filename: pointer to the file name
 * Return: if it exists a non zero number and if
 * doesn't 0
 */
int check(const char *filename)
{
	struct stat buffer;

	return (stat(filename, &buffer) == 0);
}
/**
 * append_text_to_file - appends a text into an existing file
 * @filename: name of the file
 * @text_content: text that gets appended
 * Return: -1 if the file doesn't exist or the filename is
 * NULL or the file can't be opened or doesn't have permission to be
 * written and 1 if its success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (!filename)
		return (-1);
	if (!check(filename))
		return (-1)

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;

	j = write(fd, text_content, i);
	if (j == -1)
		return (-1);

	close(fd);
	return (1);
}
