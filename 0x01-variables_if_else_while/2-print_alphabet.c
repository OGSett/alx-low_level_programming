#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
		putchar(i++);
	putchar('\n');
	return (0);
}
