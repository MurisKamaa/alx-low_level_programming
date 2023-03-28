#include "main.h"
/**
 *puts_half - prints the second half of a string
 *@str: string input
 *Return: returns nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int j;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		for (i = (len / 2); i < len; i++)
			_putchar(str[i]);
	else
	{
		n = (len - 1) / 2;
		for (j = n + 1; j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
