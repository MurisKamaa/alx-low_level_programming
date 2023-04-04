#include "main.h"

/**
 **_strchr - function that locates a character in a string
 *@s: points to the string to be checked
 *@c: Character to be checked
 *Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
