#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contesnts to STDOUT
 * @filename: Name of the text file to be read
 * @letters: Number of letters to be read and printed
 *
 * Return: Number of bytes read and printed (wt),
 * 0 if it fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t wt, tt;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	tt = read(fd, buf, letters);
	if (tt == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wt = write(STDOUT_FILENO, buf, tt);

	free(buf);
	close(fd);

	return (wt);
}
