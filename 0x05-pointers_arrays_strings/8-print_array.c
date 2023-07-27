#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array name
 * @n: Number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
		if (j == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
