#include "main.h"
#include <stdio.h>

/**
 *get_endianness  checks for endianness
 *Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr;

	ptr = (char *)&num;
	if (*ptr == 1)
		return (1);
	else
		return (0);
}
