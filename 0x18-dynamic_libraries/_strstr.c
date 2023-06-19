#include "main.h"
/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: A pointer to the first occurrence of the substring needle in the
 *         string haystack, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
    char *n = needle;

	while (*haystack != '\0')
	{
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}

	return (NULL);
}
