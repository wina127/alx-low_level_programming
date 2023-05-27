#include "main.h"

void _close(char **Buf, int *fd1, int *fd2);
/**
 * main - main function that copies the content of 
 * a file into another 
 *  @argc: argument counter
 *  @argv: array of arguments
 *  Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, *fd1 = &fd_from, *fd2 = &fd_to;
	int j, i, n = 0;
	char *buf, ** BUF = &buf;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Error: can't read from file %s/n", argv[1]);
		exit(97);
