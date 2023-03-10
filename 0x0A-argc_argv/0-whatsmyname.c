#include "main.h"
#include <stdio.h>
/**
 * main - main function containing parr
 * @argc: first parr
 * @argv: second parr
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("argc: %d\n", argc);

	printf("argv[0] = %s", argv[0]);

	return (0);
}
