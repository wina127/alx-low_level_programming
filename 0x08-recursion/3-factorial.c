#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
