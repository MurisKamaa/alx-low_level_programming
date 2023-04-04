#include "main.h"

/**
 **_memcpy - function that copies memory area
 *@dest: pointer to destination memory
 *@src: pointer to source memory
 *@n: number of bits to be copied
 *Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = src;
	char *ptr1 = dest;

	while (n--)
	{
		*ptr1++ = *ptr++;
	}
	return (dest);
}
