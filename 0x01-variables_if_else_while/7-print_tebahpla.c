#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
		putchar(a--);
	putchar('\n');
	return (0);
}
