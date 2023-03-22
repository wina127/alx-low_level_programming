#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that prints the opcodes of its own main function.
*@argc: number of arguments passed to the program
*@argv: array of arguments
*
*Return: on success, 1 or 2 in case of failure
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2x", *ptr);

		if (i == num_bytes - 1)
			continue;
		printf(" ");
		ptr++;
	}
	printf("\n");
	return (0);
}
