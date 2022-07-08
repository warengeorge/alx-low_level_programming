#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character
 * Return: 1 if "c" is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	return (0);
}
