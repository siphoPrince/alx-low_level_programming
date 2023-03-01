#include "main.h"
#include <string.h>
/**
 * *_strcat - Write a function of two strings
 * @dest : destination for first string
 * @src : destination for second string
 * Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0;
	
	int dest_len = 0;
	
	while (dest[index++])
	
		dest_len++;
	
	for (index = 0; src[index]; index++)
	
	dest[dest_len++] = src[index];
	
	return (dest);
}
