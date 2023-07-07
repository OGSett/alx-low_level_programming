#include "function_pointers.h"

/**
 * print_name - function who call another to print a name
 * @name: name to be printed
 * @f: function to print
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
