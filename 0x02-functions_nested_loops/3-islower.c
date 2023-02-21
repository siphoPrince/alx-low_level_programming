#include <stdio.h>
#include <ctype.h>
/**
 * _islower - change to lower
 * @c: the charector
 * Return: 1 if false but 0 if true
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

