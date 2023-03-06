#include "main.h"
/**
 * _strspn - main function
 * @s: first parr
 * @accept: second parr
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int match = 1;

	while (*s != '\0' && match)
	{
		match = 0;
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				match = 1;
			break;
			}
		}
	s++;
	}
	return (count);
}
