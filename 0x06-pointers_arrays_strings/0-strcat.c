#include "main.h"
/**
 * _strcat : Write a function that concatenates two strings
 * @*dest: destination for first string
 * @*src: destination for second string
 * Return: A pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char string [20];
	char string1 [20];
	int i = 0;
	int j = 0;

	dest = string;
	src = string1;

	printf("Enter the first string value\n");

	scanf("%s", string);

	printf("enter the second string of value\n");

	scanf("%s", string1);

	while(string[i] != '\0')
	{
		++dest;
		i++;
	}
	while(string1 [j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}

	printf("the concatenated string is %s", string);

	return (0);

