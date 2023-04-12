#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated memory
 *@str: The string
 *Return: Returns pointer to new string or Null if str is empty
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
}
