#include "function_pointers.h"

/**
 *int_index - Function that searches for an integer
 *@size: size of array to be searched
 *@cmp: Pointer to function to be used
 *@array: The array to be searched
 *Return: Index of first element for which cmp
 *does not return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
