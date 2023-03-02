#include "main.h"
/**
 * reverse_array - function for reversing
 * @a: first parr
 * @n: second int n parr
 * Return: 0
*/

void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
