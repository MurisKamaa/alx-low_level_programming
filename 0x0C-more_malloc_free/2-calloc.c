#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: Number of elements
 *@size: size in bytes
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
