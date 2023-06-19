#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written. On error, -1 is returned
 *         and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
