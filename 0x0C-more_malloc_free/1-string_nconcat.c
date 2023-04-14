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
	unsigned int lens1 = strlen(s1);
	unsigned int lens2 = strlen(s2);
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > lens2)
		n = lens2;
	res = malloc(sizeof(char) * (lens1 + n + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < lens1 + n; i++)
		if (i < lens1)
			res[i] = s1[i];
		else
			res[i] = s2[i - lens1];
	res[i] = '\0';
	return (res);
}
