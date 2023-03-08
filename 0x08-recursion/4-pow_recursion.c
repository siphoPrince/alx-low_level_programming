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
	{
		return -1;
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		case
		return (x * _pow_recursion(x, y-1));
	}
}

	int main()
	{
	int x = 2;
	int y = 3;
	int result = _pow_recursion(x, y);
	printf("%d^%d = %d\n", x, y, result);

	return (0);
}

