#include "main.h"
/**
 * _strspn - main function
 * @s: first parr
 * @accept: second parr
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	char *p = s;

	while (*p)
	{

	char *q = accept;

	while (*q && *q != *p)
	{
		q++;
	}
	if (*q == '\0')
	{
	return (count);
	}
	p++;
	count++;
	}
	return (count);
}
