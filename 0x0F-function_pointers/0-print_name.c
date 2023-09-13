#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: string
 * @f: ptr to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
