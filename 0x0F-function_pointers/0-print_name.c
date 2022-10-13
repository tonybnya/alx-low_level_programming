#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: argument that holds the name to print
 * @f: pointer to a function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	(*f)(name);
}
