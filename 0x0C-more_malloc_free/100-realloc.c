#include "main.h"

/**
 * _realloc - reallocate a memory block using both malloc and free
 * @ptr: pointer to be reallocated
 * @new_size: new siize of the memory block
 * @old_size: old size of the memory block
 * Return: pointer to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
		{
			p[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			p[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (p);
}
