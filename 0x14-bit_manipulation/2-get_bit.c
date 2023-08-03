#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index
 * @num: unsigned long int to search
 * @index: index of the bit to return (0-indexed)
 *
 * Return: value of bit (0 or 1), or -1 if index is out of range
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index > (sizeof(num) * 8 - 1))
		return (-1);

	mask = 1UL << index;
	bit_value = (num & mask) != 0;

	return (bit_value);
}
