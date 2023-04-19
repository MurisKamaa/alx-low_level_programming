#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int res;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	oper = argv[2];
	b = atoi(argv[3]);

	if ((*oper == '/' || *oper == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = (*get_op_func(oper))(a, b);
	if (res == -1)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", res);
	return (0);
}
