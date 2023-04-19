#include "3-calc.h"

/**
 * get_op_func - selects function to operate on
 * @s: operator selected
 * Return: pointer to the selected operation function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].operate != NULL)
	{
		if (*(ops[i].operate) == *s)
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
