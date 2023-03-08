#include "main.h"
/**
 * is_prime_number - function of main number
 * @n: input
 * Return: 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
        	return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
        	return (0);
	}
	return (is_prime_helper(n, 5));
}

	int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 6));
	}
}
