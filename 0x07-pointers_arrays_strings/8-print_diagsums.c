#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i];
		a += size;
		i++;
	}
	a -= size;
	i = 0;
	while (i < size)
	{
		sum2 += a[i];
		a -= size;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
