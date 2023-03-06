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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
