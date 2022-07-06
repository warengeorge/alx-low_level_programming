#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long int j[50];

	j[0] = 1;
	j[1] = 2;
	printf("%ld, %ld, ", j[0], j[1]);

	for (i = 2; i < 50; i++)
	{
		j[i] = j[i - 1] + j[i - 2];
		if (i == 49)
			printf("%ld\n", j[i]);
		else
			printf("%ld, ", j[i]);
	}

	return (0);
}
