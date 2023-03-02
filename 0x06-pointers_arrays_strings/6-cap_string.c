#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - funvtion used
 * @str: parr used to pass values
 * Return: str
*/
char *cap_string(char *str)
{
	int len = strlen(str);
	int i;

	if (len > 0 && islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}

	for (i = 1; i < len; i++)
	{
	if (isspace(str[i - 1]) || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || 
	str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || 
	str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
	{
	if (islower(str[i])) 
	{
	str[i] = toupper(str[i]);
	}
	}
	}

	return (str);
}

