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
	int sum1, sum2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	result = sum1 * sum2;


	printf("%d\n", result);
	return (0);
}

