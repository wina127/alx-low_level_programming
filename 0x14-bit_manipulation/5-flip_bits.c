#include "main.h"

/**
 * flip_bits - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to modify
 * @m: the index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip != 0)
	{
		if (flip & 1)
			count++;
		flip >>= 1;
	}
	return (count);
}
