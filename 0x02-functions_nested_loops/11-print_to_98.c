#include "main.h"
/**
 * print_to_98 - function that prints numbers from
 * n value to 98 up nd down
 * Return: prints lines in output
 * @n: input value
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
		printf("98");
	printf("\n");
}
