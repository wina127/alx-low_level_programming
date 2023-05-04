#include <<stdio.h>
#include "main.h"

/**
 * flip_bits - 2 bits flipped
 *
 * @n: number1 to flip
 * @m: number2 to flipped to
 *
 * Return: flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned int buff = 0;

	flip = n ^ m;

	while (flip)
	{
		if (flip & 1lu)
			buff++;
		flip >>= 1;

	}

	return (buff);

}
