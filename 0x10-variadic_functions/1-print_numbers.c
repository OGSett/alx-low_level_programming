#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string of nums to be printed.
 * @n: number of integers.
 * Return: nothing (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
