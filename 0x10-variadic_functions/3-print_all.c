#include "variadic_functions.h"

/**
 * print_all - prints everything passed to it
 * @format: a list of types of arguments passed to the function.
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list vars;
	char *str;
	char c;
	int i;
	float f;
	unsigned int j = 0;

	va_start(vars, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = (char) va_arg(vars, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(vars, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(vars, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(vars, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				break;
		}
		j++;
		if (format[j] != '\0' && (format[j] == 'c' || format[j] == 'i'
				|| format[j] == 'f' || format[j] == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(vars);
}
