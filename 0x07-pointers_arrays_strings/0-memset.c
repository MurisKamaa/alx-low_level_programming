#include "main.h"

/**
 **_memset - function that fills mempry with byte
 *@s: pointer to memory area
 *@b: The constant byte
 *@n: Number of bytes to be filled
 *Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	for (int i = 1; i <= n; i++)
		*ptr++ = b;
	return (s);
}
