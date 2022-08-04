#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all args
 * @n: integers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	if (n == 0)
	return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
