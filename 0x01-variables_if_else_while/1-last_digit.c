#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a text according to number
 * Return: 0
*/

int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}

	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}

	else (n < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}

	return (0);
