#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: 0 or unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	n = 0;
	if (!=b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '1' && b[i] != '0')
		return (0);
	}

	if (b[i] == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{

		n <<= 1;
	if (b[i] == '1')
		n += 1;
	}

	return (n);
}

