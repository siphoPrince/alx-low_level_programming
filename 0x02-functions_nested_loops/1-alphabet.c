#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet
 * Return: 0
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
		_putchar(ch);

	_putchar('\n');


}
