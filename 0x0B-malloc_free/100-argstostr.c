#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: a pointer to a new string containing all the arguments,
 * separated by \n NULL if @argc is 0 or @argv is NULL
 */
char *argstostr(int argc, char **argv)
{
	char *concatenated_str;
	int i, j, total_length = 0, current_index = 0;

	if (argc == 0 || argv == NULL)
		return (NULL);

	/* calculate total length of concatenated string */
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			total_length++;

		total_length++; /* account for newline character */
	}

	concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	/* concatenate all arguments into one string */
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			concatenated_str[current_index++] = argv[i][j];

		concatenated_str[current_index++] = '\n';
	}

	concatenated_str[current_index] = '\0';

	return (concatenated_str);
}
