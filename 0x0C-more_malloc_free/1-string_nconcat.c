#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates 2 strings
 *@s1: string s1
 *@s2: string s2
 *@n: bits of s2 to be used
 *Return: The new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > lens2)
		n = lens2;
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, lens1);
	memcpy(result + lens1, s2, n);
	result[lens1 + n] = '\0';
	return (result);
}
