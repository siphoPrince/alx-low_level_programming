#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main function
 * @a: first parr
 * @size: second parr
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = 0;

	while (i < size)
	{
		sum1 += *(a + i * size + j);
		sum2 += *(a + i * size + size - 1 - j);
		i++;
		j++;
	}

	printf("Sum of the main diagonal = %d\n", sum1);
	printf("Sum of the secondary diagonal = %d\n", sum2);
}

