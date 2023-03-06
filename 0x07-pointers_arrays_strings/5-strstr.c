#include "main.h"
/**
 * _strstr - main function
 * @haystack: first parr of function
 * @needle: second arry of function
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p = haystack;
		char *q = needle;
	while (*q && *p == *q)
	{
		p++;
		q++;
	}
	if (*q == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return ('\0');
}

