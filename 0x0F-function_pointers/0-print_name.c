#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: The name
 *@f: points to a function
 *Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
