#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to search for
 *
 * Return: A pointer to the first occurrence of any character from accept
 *         in the string s, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;
		
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}

		s++;
	}
	return (NULL);
}
