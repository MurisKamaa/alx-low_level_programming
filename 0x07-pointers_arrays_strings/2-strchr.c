#include "main.h"

/**
 **_strchr - function that locates a character in a string
 *@s: points to the string to be checked
 *@c: Character to be checked
 *Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
