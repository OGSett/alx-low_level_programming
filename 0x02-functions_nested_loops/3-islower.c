#include "main.h"

/**
 * _islower - function that check if c is lowecase ot not
 * Return: zero as value if c is not a LOWERCASE none zero if it is
 * @c: is an input
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
