#include "main.h"
/**
 * _pow_recursion - returns value of x and y
 * @x: first input
 * @y: second input
 * Return: value of x and y
 */

int _pow_recursion(x, y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x, _pow_recursion(x, y - 1));
}
