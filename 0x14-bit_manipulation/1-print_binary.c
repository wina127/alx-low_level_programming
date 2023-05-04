#include <unistd.h>
#include <limits.h>

/**
 * print_binary - print unsigned int
 *
 * @n:
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned log int x = 1ul << 63;
	char c = '0';

	while (!(x & n) && !(x == 0))
		x = x >> 1;
	if (x == 0)
		write(1, &c, 1);
	while (x)
	{
		if (x & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		x = x >> 1;
	}
}
