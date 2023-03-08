#include "main.h"
#include "_putchar.c"
/**
 * _puts_recursion - a function that prints a string
 * @s: parr that will send the string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	return;

	_putchar (*s);
	_puts_recursion(s + 1);
}
