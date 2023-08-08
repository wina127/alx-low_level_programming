#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Ifthe argument count is incorrect - exit code 97.
 * if file_from does not exist or cannot be read - exit code 98.
 * if file_to cannot be created or written to - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, wt;
	char *buffer;

	/* check for correct number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	/* Allocate 1024 bytes for buffer */
	buffer = create_buffer(argv[2]);

	/*open file_from for reading */
	from = open(argv[1], O_RDONLY);

	/* Read from file_from to buffer */
	r = read(from, buffer, 1024);

	/* creat file_to for writing */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		/* check if file_from or buffer can be read */
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		/* write from buffer to file_to */
		wt = write(to, buffer, r);

		/* check if file_to or buffer can be written */
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		/* Read from file_from to buffer */
		r = read(from, buffer, 1024);

		/*open file_to for appending */
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	/* Free memory allocated for buffer and close files */
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
