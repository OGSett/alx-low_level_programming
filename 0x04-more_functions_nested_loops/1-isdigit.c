#include "main.h"
/**
 * _isdigit - function that verifies if its a digit or not
 * @c: input
 *Return: returns 1 if c is a digit && 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
