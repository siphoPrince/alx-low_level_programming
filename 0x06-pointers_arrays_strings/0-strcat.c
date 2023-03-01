#include "main.h"
#include <stdio.h>
/**
 * *_strcat - Write a function of two strings
 * @dest : destination for first string
 * @src : destination for second string
 * Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{

	int o = 0;
	int p = 0;


	while (dest[o] != '\0')
	{
		++dest;
		i++;
	}
	while (src[p] != '\0')
	{
		dest[o] = src[p];
		dest++;
		src++;
		j++;
	}

	dest[o] = '\0';
	return (dest);

