#include <stdio.h>

/**
 * main - finds and prints the sum of the even-value terms
 * followed by a new line
 * Return: Always 0 (success)
 */
	int main(void)
	{
		int i;
		unsigned long int j, k, next, sum;

		j = 1;
		k = 2;
		sum = 0;

		for (i = 1; i <= 33;n++i)
		{
			if (j < 4000000 && (j % 2) == 0)
			{
				sum = sum + j;
			}
			next = j + k;
			j = k;
			k = next;
		}
		
		printf("%lu\n", sum);

		return (0);
	}
