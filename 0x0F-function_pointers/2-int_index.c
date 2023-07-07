#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array given.
 * @size: the size of the array.
 * @cmp:  is a pointer to the function to be used to compare values.
 * Return: If no element matches or size <= 0 - -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
