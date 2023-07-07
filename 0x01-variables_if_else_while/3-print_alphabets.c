#include <stdio.h>

/**
 * main - prints the alphabet in Low and Upper case
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	a = 'A';
	while (a <= 'Z')
		putchar(a++);
	putchar('\n');
	return (0);
}
