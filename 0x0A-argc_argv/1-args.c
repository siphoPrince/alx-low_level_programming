#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc__attribute__((unused)): first parr
 * @argv: second parr
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("argc %d\n",argc);
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
