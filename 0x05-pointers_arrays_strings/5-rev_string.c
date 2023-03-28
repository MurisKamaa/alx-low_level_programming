#include "main.h"
/**
 *rev_string - Prints a string in reverse order
 *@s: string input
 *Return: no return
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
}
