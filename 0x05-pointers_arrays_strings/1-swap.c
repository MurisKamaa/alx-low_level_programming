#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: input integer a
 *@b: input integer b
 *Return: no return
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
