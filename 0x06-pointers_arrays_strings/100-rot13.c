#include "main.h"
/**
 * rot13 - main function
 * @str: func par
 * Return: results
 */

char *rot13(char *str)
{
	char *result = str;
	int i, j, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
	int shift = (('a' <= str[i] && str[i] <= 'z') ? 13 :
			(('A' <= str[i] && str[i] <= 'Z') ? 13 : 0));

	for (j = 0; j < shift; j++)

	if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))

	result[i]++;
	}
	else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
	{
	result[i]--;
	}
	}
	}

	return (result);
}
