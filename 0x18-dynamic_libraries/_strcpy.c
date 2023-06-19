#include"main.h"
/**
 * _strcpy - Copies a string to a destination
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
  
	*dest = '\0';
  
	return (dest_start);
}
