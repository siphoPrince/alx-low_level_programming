#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * leet - function to be used
 * @str: parr to be used
 * Return: results
*/

char *leet(char *str)
{
	int i;
	int b;

	char small_letter[] = {'a', 'e', 'o', 't', 'l'};
	char big_letter[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {52, 51, 48, 55, 49};

	b = 0;
	while (str[b] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[b] == small_letter[i] || s[b] == big_letter[i])
			{
				str[b] = numbers[i];
				break;
		}
	}
	b++;
	}
	return (str);
}
