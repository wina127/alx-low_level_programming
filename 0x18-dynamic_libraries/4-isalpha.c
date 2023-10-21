#include "main.h"
/**
 *_isalpha - Entry point
 *Description: checks for alphabetic character
 *@c: is the character value it will be valued
 *Return: 1 if alphabet else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
