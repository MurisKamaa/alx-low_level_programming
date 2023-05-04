#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b:points to a string of 0 and 1 chars
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uns_i;
	int len;
	int bin;

	if (!b)
		return (0);

	uns_i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			uns_i += bin;
		}
	}

	return (uns_i);
}
