#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *argstostr - concatenates all the program arguments
 *@ac: input ac
 *@av: Points to a string
 *Return: Pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int total_len = 0;
	int len;
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;
	char *res = (char *)malloc(total_len * sizeof(char));

	if (res == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strcpy(res + postn, av[i]);
		pos += len;
		res[pos++] = '\n';
	}
	res[pos] = '\0';
	return (res);
}
