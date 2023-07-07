#include "main.h"

/**
 * print_last_digit - a function that print tha last digit of a number
 * @sett: input num
 * Return: value of last digit
 */

int print_last_digit(int sett)
{
	int res;

	res = (sett % 10);
	if (res < 0)
		res = (res * -1);
	_putchar(res + '0');
	return (res);
}
