#include "main.h"

/**
 * _islower - check main.h
 * @c: checks for lowercase character
 * Return: 1 if 'c' is lowercase or 0 ifnot lowercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
