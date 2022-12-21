#include "main.h"

/**
 * swap_int - swap two integers 'a' and 'b'
 * @a: first integer
 * @b: second integer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
