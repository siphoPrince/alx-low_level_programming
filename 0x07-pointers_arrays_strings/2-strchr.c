#include "main.h"
/**
 * _strchr - main function
 * @c: 1st parr
 * @s: second parr
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		}
		if (*s == c)
		{
		return (s);
		}
	return ('\0');
}
