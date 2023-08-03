#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set to 1 (0-indexed from right)
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
