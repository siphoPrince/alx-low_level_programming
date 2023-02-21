#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value
 * @ch: The integer ro be computed
 * Return: the value commited
 */

int _abs(int ch)
{
	if (ch >= 0)
		return (ch);
	else
		return (-ch);
}
