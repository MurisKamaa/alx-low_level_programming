#include "main.h"
#include <stdio.h>

/**
 *get_endianness  checks for endianness
 *Return: no return
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	// If the first byte contains the least significant bit, the system is little endian
	if (*ptr == 1)
		return 1;
	else
		return 0;
}
