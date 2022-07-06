#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long int j[98];

	j[0] = 1;
	j[1] = 2;
	printf("%lu, %lu, ", j[0], j[1]);

	for (i = 2; i < 98; i++)
	{
		j[i] = j[i - 1] + j[i - 2];
		if (i == 97)
			printf("%lu", j[i]);
		else
			printf("%lu, ", j[i]);
	}
	printf("\n");

	return (0);
}
