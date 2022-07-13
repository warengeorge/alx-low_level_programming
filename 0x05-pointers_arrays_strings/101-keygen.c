#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords for 101-crackme
  * Return: 0
  */

int main(void)
{
	int win, pass;

	srand(time(0));
	win = 2772;

	while (win >= 127)
	{
		pass = ((rand() % 126) + 1);
		printf("%c", pass);
		win -= pass;
	}

	printf("%c", win);
	return (0);
}
