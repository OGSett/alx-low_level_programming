#include "main.h"

/**
 * *array_range - creates a malloxated array of ints
 * @min: min range of value stored
 * @max: max range and number of elemts
 * Return: adress of the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
