#include "main.h"

/**
 * is_palindrome - returns true if the string is a palindrome
 * @s: string to be checked
 *Return: true if string is a palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}

/**
 * find_strlen - calculate the length of a string.
 * @s: the string to be calculated.
 * Return: the length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len += 1;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - Checks if the string is a palindrome.
 * @s: the string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 * Return: if the string is a palindrome - 1.
 * if the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}
