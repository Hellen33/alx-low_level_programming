#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: no of bloc of memory
 * @size: size of the element (int)
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t e;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (e = 0; e < (nmemb * size); e++)
		p[e] = 0;
	return (p);
}
