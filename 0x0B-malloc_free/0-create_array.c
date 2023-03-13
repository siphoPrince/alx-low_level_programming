#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an arry
 * @size: size used
 * @c: special char used
 * Return: special charr
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
