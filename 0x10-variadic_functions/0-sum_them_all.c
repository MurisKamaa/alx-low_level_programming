#include "variadic_functions.h"

/**
 *sum_them_all - sums all parameters in it
 *@n: Number of arguments
 *
 *Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list vars;

	if (n == 0)
		return (0);
	va_start(vars, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vars, int);
	va_end(vars);
	return (sum);
}
