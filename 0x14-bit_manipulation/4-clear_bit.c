#include <stdio.h>
#include "main.h"

/**
 * clear_bit - bit cleared at index value
 *
 * @n: number to clear bit
 *
 * Return: bit value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
