#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at index,
 * strarting from least bit at 0
 *
 * @n: number to get bit fromm
 * @index: index of bit
 * Return: value of bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z;

	if (index > 63)
		return (-1);

	z = 1 << index;
	return ((n & z) > 0);
}
