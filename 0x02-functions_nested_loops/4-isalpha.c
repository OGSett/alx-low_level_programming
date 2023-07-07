#include "main.h"

/**
 * _isalpha - function that check if c alpha or not
 * Return: zero as a value if c is not alpha and nonzero if it is
 * @c: is input
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
