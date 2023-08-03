#include "main.h"

/**
 * print_binary - prints the binary representation of a given unsigned long int
 * @num: number to be converted to binary and printed
 */
void print_binary(unsigned long int num)
{
	int i;
	int leading_zeros = 0;
	int bit_count = sizeof(num) * 8; /* Number of bits in unsigned long int */

	for (i = bit_count - 1; i >= 0; i--)
	{
		unsigned long int bit_mask = 1UL << i;

		if (num & bit_mask)
		{
			_putchar('1');
			leading_zeros = 1;
		}
		else if (leading_zeros)
		{
			_putchar('0');
		}
	}

	if (!leading_zeros)
	{
		_putcher('0');
	}
}
