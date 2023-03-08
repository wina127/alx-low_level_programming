#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: If n is negative -1, or the factorial of n
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
