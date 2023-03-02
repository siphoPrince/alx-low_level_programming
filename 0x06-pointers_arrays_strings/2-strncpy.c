#include "main.h"
/**
 * _strncpy - copys strings
 * @dest: used as first input
 * @src: used as second parr
 * @n: used for extra values
 * Return: the value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}

	return (dest);
}
