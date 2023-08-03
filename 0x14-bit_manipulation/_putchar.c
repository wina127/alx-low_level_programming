#include <unistd.h>

/**
 * _putchar - writes a character to
 * the standard output (stdout)
 * @c: the character to be written
 *
 * Return: on success, returns the number of characters written.
 * on error, returns -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
