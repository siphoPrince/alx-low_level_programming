#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplication of string
 * @str: string used
 * Return: 0
 */

char *_strdup(char *str)
{
	char *copy = strdup(str);

	if (str == NULL)
	{
		return (NULL);
		free(copy);
	}

	return (0);
}
