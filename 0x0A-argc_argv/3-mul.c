#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: first parr
 * @argv: second parr
 * Return: 0
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
	printf("Error: Please enter two integer arguments\n");
	return (1);
	}

	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	int result = sum1 * sum2;

	printf("The product of %d and %d is %d\n", sum1, sum2, result);
	return (0);
}

