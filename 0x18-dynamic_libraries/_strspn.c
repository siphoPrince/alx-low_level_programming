#include "main.h"
/**
 * _strspn - Computes the length of the initial segment of a string
 *            consisting of only characters from another string
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The length of the initial segment of s that consists only of
 *         characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		count++;
		s++;
		accept++;
	}

	return (count);
}
