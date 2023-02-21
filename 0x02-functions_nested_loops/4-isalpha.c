#include <stdio.h>
#include "main.h"

/**
 *_isalpha - checking for alphabets
 *@c - element
 *Return: if true 0 if false 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
