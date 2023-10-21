#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
		dest_length++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_length++] = src[i];
	return (dest);
}
