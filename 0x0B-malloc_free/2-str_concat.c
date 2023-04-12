#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - Concatenates two strings
 *@s1: Points to string 1
 *@s2: Points to string 2
 *Return: Returns the concatenated string
 *Returns: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (s3 == NULL)
		return (NULL);
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
