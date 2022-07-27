#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 if success else return 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
