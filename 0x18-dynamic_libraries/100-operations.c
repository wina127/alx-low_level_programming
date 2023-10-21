#include <stdio.h>

/**
 * add - Function to add two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function to subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Function to divide two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the division
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Function to calculate the modulus of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of the modulus operation
 */
int mod(int a, int b)
{
	return (a % b);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("add(10, 5) = %d\n", add(10, 5));
	printf("sub(10, 5) = %d\n", sub(10, 5));
	printf("mul(10, 5) = %d\n", mul(10, 5));
	printf("div(10, 5) = %d\n", div(10, 5));
	printf("mod(10, 5) = %d\n", mod(10, 5));
	return (0);
}
