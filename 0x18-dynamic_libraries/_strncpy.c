#include "main.h"
/**
 * _strncpy - Copies a string up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to be copied
 *
 * Return: The pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (dest_start);
}
