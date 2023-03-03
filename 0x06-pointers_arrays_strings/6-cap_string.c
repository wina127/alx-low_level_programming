#include "main.h"


/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	/* Capitalize first letter */
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;

	while (str[index])
	{
		/* Check for word separators */
		if (str[index] == ' ' || str[index] == '\t' ||
		    str[index] == '\n' || str[index] == ',' ||
		    str[index] == ';' || str[index] == '.' ||
		    str[index] == '!' || str[index] == '?' ||
		    str[index] == '"' || str[index] == '(' ||
		    str[index] == ')' || str[index] == '{' ||
		    str[index] == '}')
		{
			/* Capitalize next letter if it's lowercase */
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] -= 32;
		}

		index++;
	}
