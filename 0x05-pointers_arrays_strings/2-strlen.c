#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: name of string pointer
 * Return: Result
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
