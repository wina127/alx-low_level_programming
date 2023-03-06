#include "main.h"
/**
 * _strstr - locates a substring within a string
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointers to the beginning of the substring within the string, or NULL if the substring is not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

