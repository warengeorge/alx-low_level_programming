#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long int j[50], k = 2;

	j[0] = 1;
	j[1] = 2;

	for (i = 2; i < 50; i++)
	{
		j[i] = j[i - 1] + j[i - 2];
		if ((j[i] % 2) == 0 && j[i] < 4000000)
			k += j[i];
	}
	printf("%ld\n", k);

	return (0);
}
