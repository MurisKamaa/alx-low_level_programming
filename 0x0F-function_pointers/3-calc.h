#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdlib.h>

/**
 * struct op - Struct op
 * @operate: The operator
 * @func: The function associated
 */
typedef struct operate
{
	char *operate;
	int (*func)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif

