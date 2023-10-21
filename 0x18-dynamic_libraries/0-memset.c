#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: Pointer to memory area to be filled
 * @b: Value to be set
 * @n: Number of bytes to be filled starting from @s
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
