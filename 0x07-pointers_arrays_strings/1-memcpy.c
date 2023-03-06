#include "main.h"
/**
 * _memcpy - main function
 * @dest: 1st parr
 * @src: second parr
 * @n: unasigned parr
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dn = dest;
	char *s = src;

	while (n--)
	{
		*dn++ = *s++;
	}

	return (dest);
}
