#include "main.h"
/**
 *_islower - Entry point
 *Description: checks is a character is lowercase
 *@c: is the character value it will be valued
 *Return: 1 if lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
