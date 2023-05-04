#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit at index,
 * starting from lowest bit
 *
 * @n: number to set bit
 * @index: bit index
 *
 * Return: value of bit, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
