#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * print_chessboard - main function
 * @a: parr used
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
	j = 0;
	while (j < 8)
	{
	printf("%c ", a[i][j]);
	j++;
	}
	printf("\n");
	i++;
	}
}
