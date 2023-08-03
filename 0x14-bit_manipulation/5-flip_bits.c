#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	for (i = 0; i < (sizeof(exclusive) * 8); i++)
	{
		if (exclusive & (1UL << i))
			count++;
	}

	return (count);
}
