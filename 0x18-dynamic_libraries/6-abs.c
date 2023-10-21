#include "main.h"
/**
 * _abs - Entry point
 * @n: n is an integer value it will be valued
 * Description: prints absolute value of an integer
 * Return: int n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
