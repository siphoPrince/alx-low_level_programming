#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - main function
 * @argc: first parr
 * @argv: second parr
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int j = 0;
	int sum = 0;
	int i = 1;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
		return (1);
		}
		j++;
	}
	sum += atoi(argv[i]);
	i++;
	}

	printf("%d\n", sum);
	return (0);
}
