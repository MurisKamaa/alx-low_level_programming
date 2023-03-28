#include "main.h"
/**
 * _strlen - determines the length of a string
 * @s: input string
 * len: length of the string
 * return: string length, len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
