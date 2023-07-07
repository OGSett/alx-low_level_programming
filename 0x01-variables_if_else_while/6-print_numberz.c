#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= '9')
		putchar(i++);
	putchar('\n');
	return (0);
}
