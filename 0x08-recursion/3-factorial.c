#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial from
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
		return (n * factorial(n - 1));
}
