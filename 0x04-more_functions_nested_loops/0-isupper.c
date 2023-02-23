#include "main.h"
#include <ctyp.h>
/**
 * _isupper - changing the upper case
 * Return: if is upper return 1 if its not return 0
 * @c: the number of checker
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
