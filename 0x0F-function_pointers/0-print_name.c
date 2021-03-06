#include "main.h"

/**
 *print_name - function that prints a name.
 *
 *@name: string argument.
 *@f:pointer to a function.
 *
 *Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
