#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	int e = 1;
	int end;

	end = (*((char *) &e) + '0');

	return (end);
}
