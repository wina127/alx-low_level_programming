#include "main.h"
/**
 * create_file - creates a new text file
 * @filename: name of the file to be created
 * @text_content: content of the text that gets appended
 * to the new file
 * Return: -1 if the open function or the write function fails or the
 * filename is NULL, and 1 if the code is successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, j;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
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
