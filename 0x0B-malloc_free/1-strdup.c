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
	char *copy = (char *) malloc((strlen(str) + 1) * sizeof(char));
	
	if (str == NULL)
	{
		return (NULL);

	}
	
	if (copy == NULL)
	{
		return (NULL);
	}

	return (copy);
}
