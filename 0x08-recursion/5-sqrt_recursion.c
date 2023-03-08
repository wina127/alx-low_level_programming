#include "main.h"

/**
 * find_sqrt_helper - helper function,recursively find square root of a number
 * @num: the number to find the square root of
 * @presumption: the current presumption for the square root
 *
 * Return: the square root of the namber,
 * or -1 if it has no natural square root
 */
int find_sqrt_helper(int num, int presumption)
{
	if (presumption * presumption == num)
	{
		return (presumption);
	}
	else if (presumption == num / 2)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt_helper(num, presumption + 1));
	}
}

/**
 * _sqrt_recursion - finds the natural square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the square root of the number,
 * or -1 if it has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt_helper(n, 0));
	}
}
