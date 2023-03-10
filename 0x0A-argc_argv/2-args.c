#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: first parr
 * @argv: second parr
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);

	}
	return (0);
}
