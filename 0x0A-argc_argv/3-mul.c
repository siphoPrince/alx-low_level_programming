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
	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	int result = sum1 * sum2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	printf("%d\n", result);
	return (0);
}

