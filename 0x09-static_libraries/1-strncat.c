#include "main.h"
#include <stdio.h>
/**
 *_strncat - concatenates two strings
 *@src: pointer to source string
 *@dest: pointer to destination string
 *@n: Number of bytes to be used from src
 *Return: Returns a pointert to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i = 0;

	while (*dest_end != '\0')
		dest_end++;

	while (*src != '\0' && i < n)
	{
		*dest_end++ = *src++;
		i++;
	}
	*dest_end = '\0';
	return (dest);
}
