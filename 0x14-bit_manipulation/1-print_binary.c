#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask) == 0)
			continue;

		while (i >= 0)
		{
			_putchar((n & mask) ? '1' : '0');
			mask >>= 1;
			i--;
		}
	}
}

