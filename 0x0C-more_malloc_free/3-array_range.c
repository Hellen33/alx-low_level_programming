#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int b, d;
	int *a;

	if (min > max)
		return (NULL);
	d = max - min + 1;
	a = malloc(sizeof(int) * d);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < d; b++)
	{
		a[b] = min;
		min++;
	}
	return (a);
}
