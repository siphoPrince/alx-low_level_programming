#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
}
