#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator is a string to be printed.
 * @n: num of strings.
 * Return: none.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
