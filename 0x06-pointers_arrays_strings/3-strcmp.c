#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: value for par 1
 * @s2: value for par 2
 * Return: value 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
