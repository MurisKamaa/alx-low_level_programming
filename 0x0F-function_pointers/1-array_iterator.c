#include "function_pointers.h"

/**
 *array_iterator - Executes function on each array element
 *@array: Points to the array
 *size: Array size
 *@action: points to the function to be used
 *Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
