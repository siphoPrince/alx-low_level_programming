#include "main.h"
/**
 * _pow_recursion - returns value of x and y
 * @x: first input
 * @y: second input
 * Return: value of x and y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
