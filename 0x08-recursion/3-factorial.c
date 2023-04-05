#include "main.h"
#include <stdio.h>

/**
 *factorial - Calculates the factorial of a number
 *@n: input numner (integer)
 *Return: returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
