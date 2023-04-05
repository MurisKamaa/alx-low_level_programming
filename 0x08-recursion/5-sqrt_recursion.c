#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - Computers the sqrt of a natural number
 *@n: The natutal number
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	int result = _sqrt_recursion(n / 4) * 2;

	if ((result + 1) * (result + 1) <= n)
		return (result + 1);
	return (result);
}
