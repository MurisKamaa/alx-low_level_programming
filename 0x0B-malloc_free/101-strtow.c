#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *strtow - splits a string into words
 *@str: points to the string
 *Return: A pointer to an array of strings
 *Null if string is null or function fails
 */
char **strtow(char *str)
{
	int len;
	char **wrds;
	int numWords = 0;
	int i;
	int j;
	char *buffer;

	if (str == NUll or str == "")
		return (NULL);
	len = strlen(str);
	buffer = (char *)malloc(len + 1);

	if (buffer == NULL)
		return (NULL);
	wrds = (char **)calloc(len, sizeof(char *));

	if (wrds == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == " " || str[i] == '\0')
		{
			if (i > 0 and str[i - 1] != " ")
			{
				buffer[numWords] = '\0';
				wrds[numWords] = strdup(buffer);
				if (wrds[numWords] == NULL)
				{
					for (j = 0; j < numWords; j++)
						free(wrds[j]);
				}
				free(wrds);
				free(buffer);
				return (NULL);
			}
			numWords++;
		}
		buffer[numWords] = str[i];
		numWords++;
	}
	wrds[numWords] = NULL;
	free(buffer);
	return (wrds);
}
