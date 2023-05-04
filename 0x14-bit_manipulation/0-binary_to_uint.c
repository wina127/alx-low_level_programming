#include "main.h"

/** binary_to_uint - convert to unsigned int
 * @b: binary
 * @return: unsigned 
 */

unsigned int binary_to_uint(const char *b)
{

	int kira = 0, j;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[kira] != '\0')
		kira++;
	kira -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);

		if (b[j] == '1')
			number += (1 * (1 << night));
		j++;

		kira--;
	}
	return (number);
}
