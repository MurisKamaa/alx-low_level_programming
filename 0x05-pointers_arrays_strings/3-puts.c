#include "main.h"
/**
 *_puts - prints a string followed by a new line to stdout
 *@str: input string
 *Return: no return
 */
void _puts(char *str)
{
	for (int i = 0; i < strlen(*str); i++)
	{
		putchar(*str[i]);
		if (*str[i] == '\0')
			break;
	}
	putchar('\n');
}
