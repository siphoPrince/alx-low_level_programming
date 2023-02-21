#include <stdio.h>
#include "main.h"
/**
 * main - Write a function that prints the alphabet
 * Return: 0
*/

int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z" ; ch++)
	{
		putchar(ch);
	}

	return (0);
}
