#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of string
 * @str: the size of string
 * return: the length of str
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
