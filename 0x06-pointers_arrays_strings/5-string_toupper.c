#include "main.h"
/**
 * string_toupper - function that prints lower cases
 * @str: param used for function
 * Return: str
*/

char *string_toupper(char *str)
{
	char *p = str;
	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
			p++;
	}
	return (str);
}
