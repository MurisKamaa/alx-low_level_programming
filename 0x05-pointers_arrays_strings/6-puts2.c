#include "main.h"
/**
 *puts2 - prints every other character followed by a new line
 *@str: String input
 *Return: no return
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i+=2)
		_putchar(str[i]);
}
