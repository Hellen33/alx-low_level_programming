#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * while second string is an n value
 * @s1: string one
 * @s2: string two
 * @n: no of element to concatenate from s2
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t e, f, g;
	char *s;

	if (s1 == NULL)
		e = 0;

	else
	{

		for (e = 0; s1[e] != '\0'; e++)
			;
	}

	if (s2 == NULL)
		f = 0;

	else
	{
		for (f = 0; s2[f] != '\0'; f++)
			;
	}

	if (f > n)
		f = n;
	s = malloc(sizeof(char) * (e + f + 1));
	if (s == NULL)
		return (NULL);
	for (g = 0; g < e; g++)
		s[g] = s1[g];
	for (g = 0; g < f; g++)
		s[g + e] = s2[g];
	s[e + f] = '\0';
	return (s);
}
