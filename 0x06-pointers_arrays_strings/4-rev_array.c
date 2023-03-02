#include "main.h"
/**
 * reverse_array - this reverses an  array of integers
 * @a: the array
 * @n: carries the number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
