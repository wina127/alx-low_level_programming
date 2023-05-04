#include <stddef.h>
/**
 * binary_to_unit converts a binary strings to unsigned int 
 *
 * @b: binary to convert
 *
 * Return: unsigned int value success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y;

	if (b == NULL)
		return (0);

	for (y = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			y = y << 1;
		}
		else if (*b == '1')
		{
			y = y << 1;
			y++;
		}
		else
		{
			return (0);
		}
	}
	return (y);
}
