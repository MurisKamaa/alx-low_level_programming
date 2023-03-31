#include "main.h"
#include <stdio.h>
/**
 *_strncpy: copies a string into another
 *@dest: points to destination string
 *@src: points to source string
 *@n: Number of bytes taken from src
 *Return: Returns pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
