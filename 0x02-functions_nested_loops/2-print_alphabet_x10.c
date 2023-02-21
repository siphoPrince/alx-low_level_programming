#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - print 10x
*Return: 0
*/
void print_alphabet_x10(void)
{

	char ch;
		for (ch = 'a'; ch <= 'z'; ch < 10);
		ch++;
		_putchar(ch);
	_putchar('\n');
}
