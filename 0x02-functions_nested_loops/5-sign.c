#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: parameter for number
 * Return: 1 for greater than zero, 0 for 0 and -1 for less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
