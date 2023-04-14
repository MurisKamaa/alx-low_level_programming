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
	char *res;
	unsigned int lens1;
	unsigned int lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > lens2)
		n = lens2;
	res = mallo(sizeof(char) * (len1 + n + 1));
	if (res == NULL)
		return (NULL);
	memcpy(res, s1, len1);
	memcpy(res + len1, s2, n);
	res[len1 + n] = '\0';
	retturn (res);
}
