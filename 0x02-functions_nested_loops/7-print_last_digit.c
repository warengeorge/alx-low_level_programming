#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: prints the last digit of a number
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
