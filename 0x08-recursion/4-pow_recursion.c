#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y
 *         -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	power *= _pow_recursion(x, y - 1);

	return (power);
}
