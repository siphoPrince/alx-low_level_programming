#include "main.h"
#include <string.h>
/**
 * _strpbrk - main function
 * @accept:second parr
 * @s: first parr used
 * Return: null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

