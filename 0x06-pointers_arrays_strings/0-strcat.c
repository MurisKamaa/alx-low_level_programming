#include <stdio.h>
#include "main.h"
/**
 *_strcat - Concanetaes two strings
 *@src: source string
 *@dest: destination string
 *Return: Returns a pointer to resulting string
 */
char* _strcat(char *dest, char *src)
{
	char* dest_end = dest;
	
	while (*dest_end != '\0') 
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end++ = *src++;
	}
	*dest_end = '\0';
	return dest;
}
