/**
 * _memset - Fills a block of memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to be set
 * @n: The number of bytes to be set
 *
 * Return: The pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
