#include "main.h"
/**
 * **alloc_grid - creates a two dimensional res of int
 * @width: width of matrix
 * @height: height of matrix
 * Return: If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i;
	int z;

	if (height <= 0 || width <= 0)
		return (NULL);
	res = (int **) malloc(sizeof(int *) * height);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		res[i] = (int *) malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			free(res);
			z = 0;
			while (z <= i)
			{
				free(res[z]);
				z++;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		z = 0;
		while (z < width)
		{
			res[i][z] = 0;
			z++;
		}
		i++;
	}
	return (res);
}
