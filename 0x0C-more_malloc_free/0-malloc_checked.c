#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - returns a pointer to allocated memory
 *@b: Integer to be stored
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
