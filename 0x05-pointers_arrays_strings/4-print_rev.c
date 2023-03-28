#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 *@s: string input
 *Return: No return
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		while (*s != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
