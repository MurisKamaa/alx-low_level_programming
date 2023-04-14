#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to memory previosuly allocated
 *@old_size:size in bytes of allocated space
 *@new_size:size in bytes of new memory block
 *Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
