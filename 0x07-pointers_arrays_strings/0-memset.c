#include "main.h"
/**
 * _memse - the main function
 * @s: first parr
 * @b:second par
 * @n:int parr
 * Return: alwasy 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);

}
