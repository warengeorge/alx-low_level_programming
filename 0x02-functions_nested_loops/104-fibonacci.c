#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	float j[98];

	j[0] = 1;
	j[1] = 2;
	printf("%.0f, %.0f, ", j[0], j[1]);

	for (i = 2; i < 98; i++)
	{
		j[i] = j[i - 1] + j[i - 2];
		if (i == 97)
			printf("%.0f\n", j[i]);
		else
			printf("%.0f, ", j[i]);
	}

	return (0);
}
