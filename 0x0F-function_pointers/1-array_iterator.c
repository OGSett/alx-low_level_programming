#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array
 * @array: array given
 * @size: size of array
 * @action: the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
