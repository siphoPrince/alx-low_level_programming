#include <stdio.h>
#include "main.h"
/**
 * factorial - returns factorial of givin number
 * @n: input
 * Return: number of factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
