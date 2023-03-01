#include "main.h"
#include <string.h>
/**
 * *_strcat - Write a function of two strings
 * @dest : destination for first string
 * @src : destination for second string
 * Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src, int m)
{

	strncat(dest, src, m);
	return (dest);
}
