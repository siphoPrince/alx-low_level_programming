#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * leet - function to be used
 * @str: parr to be used
 * Return: results
*/

char *leet(char *str)
{
	static char result[100];
	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
	char c = str[i];

	if (c == 'a' || c == 'A')
	{
	result[j] = '4';
	}
	else if (c == 'e' || c == 'E')
	{
	result[j] = '3';
	}
	else if (c == 'o' || c == 'O')
	{
	result[j] = '0';
	}
	else if (c == 't' || c == 'T')
	{
	result[j] = '7';
	}
	else if (c == 'l' || c == 'L')
	{
	result[j] = '1';
	}
	else
	{
	result[j] = c;
	}
	}
	result[j] = '\0';

	return (result);
}
