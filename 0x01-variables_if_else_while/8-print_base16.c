#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;


	n = 48;
	while (n < 58)
	{
		putchar(n++);
	}
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
