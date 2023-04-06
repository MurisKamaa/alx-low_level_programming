#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *is_palindrome - Checkes if a string is a palindrome
 *@s: Points to the string
 *Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int palCheck;

	if (length <= 1)
		return (1);
	if (s[0] != s[length - 1])
		return (0);
	s[length - 1] = '\0';
	palCheck = is_palindrome(s + 1);
	s[length - 1] = s[0];
	return (palCheck);
}
