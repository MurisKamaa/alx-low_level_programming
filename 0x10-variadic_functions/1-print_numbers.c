#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers followed by a new line
 *@separator: String 2b printed btwn numbers
 *@n: Number of integers passed to function
 *Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vars;

	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vars, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vars);
}
