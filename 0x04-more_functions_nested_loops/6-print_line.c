#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the character
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');

		i++;
	}
	_putchar('\n');
}
