#include <ctype.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: argument vector
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{	
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
		printf("Error\n");
		exit(98);
	}
	}
	}	
		mul = atol(argv[1]) * atol(argv[2]);
		printf("%ld\n", mul);
	}
	return (0);
}
