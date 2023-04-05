#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - calculates x^y
 *@x: Input x
 *@y: input y
 *Return: Returns the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
