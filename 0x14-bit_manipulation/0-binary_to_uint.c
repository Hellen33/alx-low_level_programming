#include "main.h"

/**
 * binary_to_uint - a function that converts binary number
 * to an unsigned int
 * @b: a character pointer to a string containing the binary
 * numbers
 * Return: the converted decimal (output)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int a;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;

	}
	return (num);
}
