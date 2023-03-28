#include "main.h"
/**
 * int _strlen - determines the length of a string
 * @s - input string
 * return: no return
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
