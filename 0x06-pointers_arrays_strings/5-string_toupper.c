#include "main.h"
/**
 * string_toupper - function that prints lower cases
 * @str: param used for function
 * Return: str
*/

char *string_toupper(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
	}
	return (str);
}
