#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array of characters
 * @c: Starting character
 * @size: Number of characters
 * Return: Pointer to array or NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);

	ptr = calloc(size, sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
