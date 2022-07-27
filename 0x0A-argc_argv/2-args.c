#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments its receives
 * @argc: argument counter
 * @argv: argument string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
