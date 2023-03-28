#include <stdio.h>
#include "main.h"
/**
 *_strcpy - writes a string pointed to by src to buffer pointed by dest
 *@src: input source string
 *@dest: input destination buffer
 *Return: Returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
