#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates @src to @dest
 * @src: the source string to append to
 * @dest: the destiation string to be concatenated
 * @n: input value
 * Return: the value of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
