#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to
 * @dest: the second destiation string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
