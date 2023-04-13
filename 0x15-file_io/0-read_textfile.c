#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: text file to be read and printed
 * @letters: amount of letters to be printed
 * Return: the actual number of letters to be read and printed
 * if the file name is null returns 0
 * if the file cant be opened returns 0
 * or if the write file doesn't have the desired output
 * returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(char) * letters);
	ssize_t i, j;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	if (i != j)
		return (0);
	free(buf);
	close(fd);

	return (i);

}
