#include <stdio.h>
#include "main.h"
/**
 *print_array - prints n elements of an array of integers
 *@a: input a, array
 *@n: input n, number of elements to be printed 
 *Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(",");
	}
	printf("\n");
}
