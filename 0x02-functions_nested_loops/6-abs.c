#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: the number
 * Return: always 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	return (num);
}
