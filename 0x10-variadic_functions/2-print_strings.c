#include "variadic_functions.h"

/**
 *print_strings - Prints string and a new line
 *@separator: Separator between strings
 *@n: Number of strings
 *return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vars;
	char *str;

	va_start(vars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vars, char *);
		printf("%s", str ? str : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vars);
}
