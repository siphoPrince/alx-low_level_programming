#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @d: number
 * Return: value of last digit of number
*/

int print_last_digit(int d)
{
	int last;

	last = d % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
