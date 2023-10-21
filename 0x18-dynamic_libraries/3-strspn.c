#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to match
 *
 * Return: number of bytes in the initial segment of s
 * consists only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			else if (!accept[j + 1])
				return (bytes);
		}
	}

	return (bytes);
}

