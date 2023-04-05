#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - Computers the sqrt of a natural number
 *@n: The natutal number
 *Return: the square root
 */
int _sqrt_recursion(int n)
{
	int a = 1;
	int b = n;
	int pow;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (a <= b)
	{
		int c = (a + b) / 2;

		if (c * c == n)
			return (c);
		else if (c * c < n)
		{
			a = c + 1;
			pow = c;
		}
		b = c - 1;
	}
	return (pow)
}
