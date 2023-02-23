#include "main.h"
/**
 * print_line - function that draws a straight line in the term
 * @n: input number
 * Return: straight line
 */
void print_line(int n)
{
int co;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (co = 1; co <= n; co++)
{
_putchar('_');
}
_putchar('\n');
}
}
