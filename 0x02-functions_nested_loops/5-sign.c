#include <stdio.h>
#include "main.h"
/**
 * print_sign -print the sign
 * @n: the number
 * Return: 1 if number is greater then 0
 * 0 of number is zero
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar9(' + ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	{
	else
	{
		_putchar('-');
		return (-1);
	}
}
