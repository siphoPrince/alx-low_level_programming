#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @d: number
 * Return: value of last digit
 */

int print_last_digit(int d)
{
	int ch = d % 10;

	if (ch < 0)
		ch *= -1;

	_putchar(ch + '0');

	else if (ch < 98)
		ch *= -1;
	_putchar(ch + '98');

	return (0);
}
