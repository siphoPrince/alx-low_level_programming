#include "main.h"
/**
 * _isupper - changing the upper case
 * Return: if is upper return 1 if its not return 0
*/

int _isupper(int c)
{
	if (c <= 'c' && c >= 'z')
		return (1);
	else
		return(0);
}
